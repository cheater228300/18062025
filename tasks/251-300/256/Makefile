CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
SOURCES = main.c
OBJECTS = $(SOURCES:.c=.o)
LIBRARY = libmylib.dll
EXECUTABLE = myprogram.exe
TEST_SOURCES = test.c
TEST_OBJECTS = $(TEST_SOURCES:.c=.o)
TEST_EXECUTABLE = mytest.exe

.PHONY: all build test clean run

all: build

build: $(LIBRARY) $(EXECUTABLE)

$(LIBRARY): lib.c
	$(CC) $(CFLAGS) -shared -o $@ $< -Wl,--add-stdcall-alias

$(EXECUTABLE): $(OBJECTS) $(LIBRARY)
	$(CC) $(OBJECTS) -L. -lmylib $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(TEST_EXECUTABLE)
	PATH=.:$$PATH ./$(TEST_EXECUTABLE)

$(TEST_EXECUTABLE): $(TEST_OBJECTS) $(LIBRARY)
	$(CC) $(TEST_OBJECTS) -L. -lmylib $(LDFLAGS) -o $@

clean:
	rm -f $(OBJECTS) $(TEST_OBJECTS) $(EXECUTABLE) $(TEST_EXECUTABLE) $(LIBRARY)