gh-get:
	gcc -o gh-get main.c -Wall
install:
	cp gh-get /usr/local/bin/
hello:
	echo "Hello!"
