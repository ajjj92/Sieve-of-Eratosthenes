CC = gcc
CFLAGS = -Wall -pedantic -std=c99

primesearch: eratosthenes.o eratosthenes_func.o
	$(CC) eratosthenes.o eratosthenes_func.o  -o primesearch $(CFLAGS)
eratosthenes.o: eratosthenes.c eratosthenes.h
	$(CC) eratosthenes.c -c $(CFLAGS)
eratosthenes_func.o: eratosthenes_func.c eratosthenes.h
	$(CC) eratosthenes_func.c -c $(CFLAGS)