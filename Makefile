CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

SRC = src/main.c src/vault.c src/crypto.c src/utils.c
OUT = password_manager

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f password_manager
