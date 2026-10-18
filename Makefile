CC = clang
CFLAGS = -Wall -Wextra -g

main: main.c
	$(CC) $(CFLAGS) main.c -o main
	./main

clean:
	rm -f main
