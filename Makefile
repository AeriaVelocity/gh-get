gh-get:
	gcc -o gh-get gh-get.c -Wall
install:
	cp gh-get /usr/local/bin/
hello:
	echo "Hello!"
