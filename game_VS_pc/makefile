CC = gcc
CFLAGS = -Wall

SRC_FILES = main.c tictactoe.c
OBJ_FILES = $(SRC_FILES:.c=.o)
TARGET = myprogram

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c tictactoe.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ_FILES) $(TARGET)
