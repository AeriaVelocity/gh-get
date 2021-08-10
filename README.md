# gh-get
A `git clone` wrapper that makes it simple to clone any GitHub repository.

### Building
Clone the repo (unfortunately you can't use `gh-get` to download `gh-get` if you don't have it yet):
```bash
> git clone https://github.com/That1M8Head/gh-get
> cd gh-get
```
Compile it and install by `make`ing and `make install`ing:
```bash
> make
> make install # You may need to run this with sudo
```
And you're done! You can go ahead and `cp` it to `/usr/local/bin/` or wherever else you want.

### Using gh-get
```
gh-get <username> <repo> [destination]
```
`gh-get` always uses HTTPS.

### Examples
```
> gh-get that1m8head gh-get
```
```
> gh-get thiderman doge ~/doge
```
