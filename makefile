all: main clean

main: sorts.o
	gcc -Wall main.c sorts.o -o teste.out

sorts.o:
	gcc -Wall sorts.h sorts.c -c

	
clean:
	rm -rf *.o
