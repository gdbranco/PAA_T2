SRC = "./src/"

all: merge comb selection bubble insertion shell maker clean

#MERGE SORT MAKE
merge: sorts.o merge.o
	gcc -Wall $(SRC)main_merge.c sorts.o merge_sort.o -o merge.out

merge.o: sorts.o
	gcc -Wall $(SRC)merge_sort.c $(SRC)sorts.h -c
	
#SHELL SORT MAKE
shell: sorts.o shell.o
	gcc -Wall $(SRC)main_shell.c sorts.o shell_sort.o -o shell.out	

shell.o: sorts.o
	gcc -Wall $(SRC)shell_sort.c $(SRC)sorts.h -c

#COMB SORT MAKE
comb: sorts.o comb.o
	gcc -Wall $(SRC)main_comb.c sorts.o comb_sort.o -o comb.out	

comb.o: sorts.o
	gcc -Wall $(SRC)comb_sort.c $(SRC)sorts.h -c

#SELECT SORT MAKE
selection: sorts.o selection.o
	gcc -Wall $(SRC)main_selection.c sorts.o selection_sort.o -o selection.out	

selection.o: sorts.o
	gcc -Wall $(SRC)selection_sort.c $(SRC)sorts.h -c
	
#BUBBLE SORT MAKE
bubble: sorts.o bubble.o
	gcc -Wall $(SRC)main_bubble.c sorts.o bubble_sort.o -o bubble.out	

bubble.o: sorts.o
	gcc -Wall $(SRC)bubble_sort.c $(SRC)sorts.h -c

#INSERT SORT MAKE	
insertion: sorts.o insertion.o
	gcc -Wall $(SRC)main_insertion.c sorts.o insertion_sort.o -o insertion.out	

insertion.o: sorts.o
	gcc -Wall $(SRC)insertion_sort.c $(SRC)sorts.h -c

#SORT UTILS MAKE
sorts.o:
	gcc -Wall $(SRC)sorts.h $(SRC)sorts.c -c

#STRING MAKER MAKE
maker: sorts.o
	gcc -Wall $(SRC)string_maker.c sorts.o -o maker.out

#CLEAN MAKE
clean:
	rm -rf *.o
	
fclean:
	rm -rf *.out
