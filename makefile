SRC = ./src/
BIN = ./bin/

all: count merge_insert merge comb selection bubble insertion shell maker clean

#COUNT MAKE
count: sorts.o count.o
	gcc -Wall $(SRC)main_count.c sorts.o merge_sort_count.o -o $(BIN)count.out

count.o:
	gcc -Wall $(SRC)merge_sort_count.c $(SRC)sorts.h -c

#MERGE INSERT SORT MAKE
merge_insert: sorts.o merge_insert.o insertion.o merge.o
	gcc -Wall $(SRC)main_mergeinsert.c sorts.o merge_sort.o mergeinsert_sort.o insertion_sort.o -o $(BIN)merge_insert.out

merge_insert.o:
	gcc -Wall $(SRC)mergeinsert_sort.c $(SRC)sorts.h -c

#MERGE SORT MAKE
merge: sorts.o merge.o
	gcc -Wall $(SRC)main_merge.c sorts.o merge_sort.o -o $(BIN)merge.out

merge.o:
	gcc -Wall $(SRC)merge_sort.c $(SRC)sorts.h -c
	
#SHELL SORT MAKE
shell: sorts.o shell.o
	gcc -Wall $(SRC)main_shell.c sorts.o shell_sort.o -o $(BIN)shell.out	

shell.o:
	gcc -Wall $(SRC)shell_sort.c $(SRC)sorts.h -c

#COMB SORT MAKE
comb: sorts.o comb.o
	gcc -Wall $(SRC)main_comb.c sorts.o comb_sort.o -o $(BIN)comb.out	

comb.o:
	gcc -Wall $(SRC)comb_sort.c $(SRC)sorts.h -c

#SELECT SORT MAKE
selection: sorts.o selection.o
	gcc -Wall $(SRC)main_selection.c sorts.o selection_sort.o -o $(BIN)selection.out	

selection.o:
	gcc -Wall $(SRC)selection_sort.c $(SRC)sorts.h -c
	
#BUBBLE SORT MAKE
bubble: sorts.o bubble.o
	gcc -Wall $(SRC)main_bubble.c sorts.o bubble_sort.o -o $(BIN)bubble.out	

bubble.o:
	gcc -Wall $(SRC)bubble_sort.c $(SRC)sorts.h -c

#INSERT SORT MAKE	
insertion: sorts.o insertion.o
	gcc -Wall $(SRC)main_insertion.c sorts.o insertion_sort.o -o $(BIN)insertion.out	

insertion.o:
	gcc -Wall $(SRC)insertion_sort.c $(SRC)sorts.h -c

#SORT UTILS MAKE
sorts.o:
	gcc -Wall $(SRC)sorts.h $(SRC)sorts.c -c

#STRING MAKER MAKE
maker: sorts.o
	gcc -Wall $(SRC)string_maker.c sorts.o -o $(BIN)maker.out

#CLEAN MAKE
clean:
	rm -rf *.o
	
fclean: clean
	rm -f ./bin/*.out
