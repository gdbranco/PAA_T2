#include "sorts.h"

void selection_sort(string_array *a, int size) {
   int i, j, min;
	for (i = 0; i < (size-1); i++){
		min = i;
		for (j = (i+1); j < size; j++){
			if(strcmp(a[j].dado, a[min].dado) < 0) 
				min = j;
		}
		if(i != min) {
			string_swap(a,i,min);
		}
	}
}
