# DeezNuts Makefile

# NOTE: to compile just cd <path so deeznut> and run 'make'

CC := c++
CFLAGS :=


SRC := deeznut.cpp
OUT := deeznut





all:
	$(CC) $(SRC) -o $(OUT)
