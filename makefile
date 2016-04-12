all: main maker clean

main: sorts.o
	gcc -Wall main.c sorts.o -o teste.out

sorts.o:
	gcc -Wall sorts.h sorts.c -c

maker: sorts.o
	gcc -Wall string_maker.c sorts.o -o maker.out
	
clean:
	rm -rf *.o
