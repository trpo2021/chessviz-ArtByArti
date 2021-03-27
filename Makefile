all:
	gcc -Wall -Werror -o stdout stdout.c
clean:
	$(RM) stdout
