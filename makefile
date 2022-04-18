

CC = gcc
CFLAGS=-Wall

all: countsFile
.PHONY: all

countsFile: read.o counts.c
	$(CC) $(CFLAGS) -o countsFile read.o counts.o
	
read.o: read.c
	$(CC) $(CFLAGS) -c -o read.o read.c
	
counts.o: counts.c
	$(CC) $(CFLAGS) -c -o counts.o counts.c

debug: clean read.c counts.c
	$(CC) $(CFLAGS) -g -o test counts.c read.c
	gdb -tui test
	
.PHONY: clean
clean:
	rm -rf *.0
