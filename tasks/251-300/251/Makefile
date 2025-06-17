CC = gcc
CFLAGS = -Wall -I src

all: main

main: main.o src/utils.o src/utils/helper.o
	$(CC) main.o src/utils.o src/utils/helper.o -o main

main.o: main.c src/utils.h
	$(CC) $(CFLAGS) -c main.c

src/utils.o: src/utils.c src/utils.h src/utils/helper.h
	$(CC) $(CFLAGS) -c src/utils.c -o src/utils.o

src/utils/helper.o: src/utils/helper.c src/utils/helper.h
	$(CC) $(CFLAGS) -c src/utils/helper.c -o src/utils/helper.o

clean:
	rm -f *.o src/*.o src/utils/*.o main