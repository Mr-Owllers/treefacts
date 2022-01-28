# TreeFacts - A CLI application that displays facts about trees
## Installation
### Requirements
- GCC
- Curl
### UNIX-like
```sh
git clone https://github.com/Mr-Owllers/treefacts.git
cd treefacts
make
```
### Windows
```sh
gcc src/treefacts.c -o obj/treefacts.o
gcc src/libtreefacts.c -o obj/libtreefacts.o
gcc obj/treefacts.o -o bin/treefacts.exe
```

## Uninstallation
## UNIX-like
```sh
cd treefacts
make u
```
## Usage
To use TreeFacts without having to CD into the `bin` folder, you can run `make build`

Then, to display the help menu, you can run this:
```sh
treefacts --help
```
## Authors
[Mr-Owllers](https://github.com/Mr-Owllers)

[Erdi-GitHub (Erdi)](https://github.com/Erdi-GitHub)
