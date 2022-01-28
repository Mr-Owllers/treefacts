CFLAGS=$(shell)
LIBS=$(shell)
OBJS=$(patsubst src/%.c, obj/%.o, $(wildcard src/*.c))
NAME=treefacts

CC?=gcc

bin/$(NAME): $(OBJS)
	$(CC) $(wildcard obj/*.o) -o $@ $(LIBS)

obj/%.o: src/%.c $(wildcard src/*.h)
	$(CC) -c $< -o $@ $(CFLAGS)

run: bin/$(NAME)
	chmod u+x bin/$(NAME)
	bin/$(NAME)

build: bin/$(NAME)
	sudo cp bin/$(NAME) /usr/local/bin/$(NAME)
