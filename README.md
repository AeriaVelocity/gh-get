# gh-get
Makes cloning from a GitHub repo literally as easy as 1, 2, 3.
Basically a wrapper for `git clone`.

> This was originally a C++ program that I manually converted to C.

### Building
Clone the repo (unfortunately you can't use `gh-get` to download `gh-get` if you don't have it yet):
```
> git clone https://github.com/That1M8Head/gh-get
> cd gh-get
```
Use your favourite C compiler to compile it:
```
> tcc gh-get.c
```
And you're done! You can go ahead and copy it to `/usr/local/bin/` or wherever else you want.

### Usage
```
gh-get https|ssh username repo
```

### Example
#### HTTPS
```
> gh-get https id-Software DOOM
```
#### SSH
```
> gh-get ssh That1M8Head DOOM-8
```
