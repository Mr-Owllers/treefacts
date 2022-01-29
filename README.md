# TreeFacts - A CLI application that displays facts about trees
Warning: This app doesn't fully support Windows devices and hasn't been tested on Windows devices.
## Installation
### Requirements
- GCC
- Curl
### UNIX-like
+ ### Manually
```sh
git clone https://github.com/Mr-Owllers/treefacts.git
cd treefacts
make install
```
+ ### Arch Linux
```sh
yay -S treefacts
```

### Windows
```sh
gcc src/treefacts.c -o obj/treefacts.o
gcc src/libtreefacts.c -o obj/libtreefacts.o
gcc obj/treefacts.o -o bin/treefacts.exe
```

## Uninstallation
### UNIX-like
```sh
cd treefacts
make uninstall
```
## Usage
Displaying the help menu:
```sh
treefacts --help
```
The help menu:
```
----------- TreeFacts Help Menu -----------

--help        -h   Displays this help menu
--randomfact  -r   Get a randomfact
--fact        -f   Gets today's fact
--dayfact     -d   Gets the fact of the specified day
--indexfact   -i   Gets a fact by index
--fetch       -e   Fetches tree ASCII art
```
## Authors
[Mr-Owllers](https://github.com/Mr-Owllers)

[Erdi-GitHub (Erdi)](https://github.com/Erdi-GitHub)
