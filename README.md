# CAT IN X FLAVORS

___

The goal of this repository is to replicate the familiar "cat" command in as many languages as I can.

## Usage

### All

``` bash
git clone https://github.com/lrth06/cat_in_x_flavors.git #HTTPS
# OR
git clone git@github.com:lrth06/cat_in_x_flavors.git #SSL

cd cat_in_x_flavors
```

### language

- #### Go
  
``` bash
cd golang
go build  -o ./
gocat /path/to/your/file
```

- ### Python

``` bash
cd python
chmod +x pycat.py
python3 -m pycat /path/to/your/file
```

- ### NodeJS

```bash
cd nodejs
npm install -g .
nodecat /path/to/your/file
```