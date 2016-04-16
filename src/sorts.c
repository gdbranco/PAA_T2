#include "sorts.h"
void string_swap(string_array *strings, int i, int j)
{
    char aux[6] = "";
    strcpy(aux,strings[i].dado);
    strcpy(strings[i].dado,strings[j].dado);
    strcpy(strings[j].dado,aux);
}

/*void merge_insert(string_array *a, int n, int k)
{
	if(k < valor)
	{
		insertion_sort(a,n);
	}
	else
	{
		merge_sort(a,n);
	}
}*/
