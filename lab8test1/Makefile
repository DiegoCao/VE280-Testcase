CC = g++

CFLAGS = -Werror -Wall

all: test1 test2 test3 test4 run clean dif

test1: test1.cpp test1.o node.o
	$(CC) $(CFLAGS) test1.cpp node.o -o test1 

test2: test2.cpp test2.o node.o
	$(CC) $(CFLAGS) test2.cpp node.o -o test2 

test3: test3.cpp test3.o node.o
	$(CC) $(CFLAGS) test3.cpp node.o -o test3

test4: test4.cpp test4.o node.o
	$(CC) $(CFLAGS) test4.cpp node.o -o test4


node.o: node.cpp
	$(CC) $(CFLAGS) -c node.cpp


clean:
	 rm *.o 

run:
	./test1 > test1.out
	./test2 > test2.out
	./test3 > test3.out
	./test4 > test4.out

dif:
	diff test1.out chr1.out
	diff test2.out chr2.out
	diff test3.out chr3.out
	diff test4.out chr4.out
