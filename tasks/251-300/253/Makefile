CC = gcc
CFLAGS = -Wall
SRC = main.c utils.c math.c helpers.c
OBJ = $(SRC:.c=.o)
EXEC = program

build: $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

test:
	@echo "Running tests..."
	@./$(EXEC)

run: build
	./$(EXEC)

main.o: main.c utils.h math.h helpers.h
	$(CC) $(CFLAGS) -c main.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

math.o: math.c math.h
	$(CC) $(CFLAGS) -c math.c

helpers.o: helpers.c helpers.h
	$(CC) $(CFLAGS) -c helpers.c

clean:
	rm -f *.o $(EXEC)

.PHONY: build test run clean