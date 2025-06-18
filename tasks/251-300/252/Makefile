CC = gcc
CFLAGS = -Wall

all: main

main: main.o utils.o math.o helpers.o
	$(CC) main.o utils.o math.o helpers.o -o main

main.o: main.c utils.h math.h helpers.h
	$(CC) $(CFLAGS) -c main.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

math.o: math.c math.h
	$(CC) $(CFLAGS) -c math.c

helpers.o: helpers.c helpers.h
	$(CC) $(CFLAGS) -c helpers.c

clean:
	rm -f *.o main
