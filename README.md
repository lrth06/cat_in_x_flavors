# CAT IN X FLAVORS

The goal of this repository is to replicate the familiar "cat" command in as many languages as I can. Full, and additional functionality will be added, but currently the models simply read the file contents to a string in the console, or warn you in the event that there was no file given, or if the file you've specified cannot be opened.

## Usage

### Installation Options

``` bash
git clone https://github.com/lrth06/cat_in_x_flavors.git #HTTPS
# OR
git clone git@github.com:lrth06/cat_in_x_flavors.git #SSL
cd cat_in_x_flavors
```

```bash
# OPTIONAL (recommended) - Run in docker
docker build . -t <Your lrth06/catinx
docker run  -it -v $(pwd):/github.com/lrth06/app lrth06/catinx
```

### languages

- #### Go
  
``` bash
cd golang
go build  -o ./
gocat /path/to/your/file
```

- ### Python

``` bash
cd python
python3 pycat.py /path/to/your/file
```

- ### NodeJS

```bash
cd nodejs
npm install -g .
nodecat /path/to/your/file
```

- ### C
  
``` bash
cd c
gcc ccat.c -o ccat
./ccat /path/to/your/file
```

- ### C++
  
```bash
cd cpp
g++ -o cppcat ./cppcat.cpp
./cppcat /path/to/your/file
```

- ### Rust (in progress)

```bash
cd rust
cargo build
cargo run /path/to/your/file
```

- ### Perl

```bash
cd perl
perl perlcat.pl /path/to/your/file
```
