#include "sorts.h"

void bubble_sort (string_array *a, int size) {
	int i, j;
	for(i=size-1; i >= 1; i--){  
		for(j=0; j < i ; j++){
			if(strcmp(a[j].dado, a[j+1].dado) > 0){
				string_swap(a,j,j+1);
			}
		}
	}
}
