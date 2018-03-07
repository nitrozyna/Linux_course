# declaring the variables
CC=gcc
# enabling compiler flags
CFLAGS= -c -g -std=c99

all: image clean

image: printpgm.o
	$(CC) $^ -o image

# compiling printpgm.c
printpgm.o: printpgm.c
	$(CC) $(CFLAGS) $^

# removing the object file
.PHONY: clean
clean:
	rm -rf *.o
