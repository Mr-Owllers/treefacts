CFLAGS=$(shell)
LIBS=$(shell)
OBJS=$(patsubst src/%.c, obj/%.o, $(wildcard src/*.c))
NAME=treefacts

CC?=gcc

bin:
	mkdir bin

obj:
	mkdir obj

install: bin obj bin/$(NAME)
	sudo cp bin/$(NAME) /usr/local/bin/$(NAME)

bin/$(NAME): $(OBJS)
	$(CC) $(wildcard obj/*.o) -o $@ $(LIBS)

obj/%.o: src/%.c $(wildcard src/*.h)
	$(CC) -c $< -o $@ $(CFLAGS)

run: bin/$(NAME)
	chmod u+x bin/$(NAME)
	bin/$(NAME)

uninstall:
	sudo rm /usr/local/bin/$(NAME)

clean:
	rm bin -rf
	rm obj -rf