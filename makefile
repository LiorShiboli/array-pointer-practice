CC = gcc
FLAGS = -Wall -g
all:isort txtfind

isort:main-isort.o insertion.o
	$(CC) $(FLAGS) -o isort main-isort.o insertion.o
insertion: insertion.c insertion.h
	$(CC) $(FLAGS) -valgrind -c insertion.c
main-isort: main-isort.c insertion.h
	$(CC) $(FLAGS) -valgrind -c main-isort.c

txtfind:main-txtfind.o txtfunc.o
	$(CC) $(FLAGS) -o txtfind main-txtfind.o txtfunc.o
txtfunc: txtfunc.c txtfunc.h
	$(CC) $(FLAGS) -valgrind -c txtfunc.c


main-txtfunc: main-txtfind.c txtfind.h
	$(CC) $(FLAGS) -valgrind -c main-txtfind.c



.PHONY: clean all
clean:
	rm -f *.o *.a *.so isort txtfind

