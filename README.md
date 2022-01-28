# treefacts- a cli that prints out facts about trees

## reason of making treefacts
i just wanted to make it for fun and cuz i love trees

## installation
### requirments
* gcc
* curl

### linux/mac
```
git clone https://github.com/Mr-Owllers/treefacts.git
cd treefacts
make
```
> packages for linux (AUR, deb, ...) coming soon!

### windows
> there is currently no .bat or .exe file for installation so manual installation needs to be done
```
gcc src/treefacts.c -o obj/treefacts.o
gcc src/libtreefacts.c -o obj/libtreefacts.o
gcc obj/treefacts.o -o bin/treefacts.exe
```
> you can copy & paste or move treefacts.exe to anywhere you want in your computer

## uninstallation
### linux/mac
```
cd treefacts
make u
```

## usage
```
----------- TreeFacts Help Menu -----------

--help        -h   Displays this help menu
--randomfact  -r   Get a randomfact
--fact        -f   Gets today's fact
--dayfact     -d   Gets the fact of the specified day
--indexfact   -i   Gets a fact by index
--fetch       -e   Fetches tree ASCII art
```

## author
- Mr-Owllers ([Github](https://github.com/Mr-Owllers))
- Erdi-GitHub ([Github](https://github.com/Erdi-GitHub))

## version
[v1.0.0](CHANGELOG.md)

## license
under the [mit license](LICENSE)
