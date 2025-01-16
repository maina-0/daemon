# _*_ MakeFile _*_
#
CC = clang
CFLAGS = -g -Wall
A_CFLAGS = -c
OBJ = $(wildcard *.o)


main: main.o pid.o sid.o
	$(CC) $(CFLAGS) main.o pid.o sid.o -o main

main.o: main.c
	 $(CC) $(CFLAGS) $(A_CFLAGS) main.c

sid.o: sid.c
	$(CC) $(CFLAGS) $(A_CFLAGS) sid.c

pid.o: pid.c
	$(CC) $(CFLAGS) $(A_CFLAGS) pid.c


.PHONY: clean
clean:
	rm -f $(OBJ) program
	


