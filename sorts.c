#include "sorts.h"
void string_swap(char* s1, char* s2)
{
    char aux[6];
    strcpy(aux,s1);
    strcpy(s1,s2);
    strcpy(s2,aux);
}
void combsort(string_array* input, int tam)
{
    int gap = tam;//nao contra \0
    int trocou = 1;
    int i;
    while((gap>1) || trocou)
    {
	if(gap > 1)
	  gap = gap / 1.247330950103979;
	i=0;
	trocou = 0;
	while(i+gap < tam)
	{
	  if(strcmp(input[i].dado,input[i+gap].dado)>0)
	    string_swap(input[i].dado,input[i+gap].dado);
	    trocou = 1;
	    i++;
	}
    }
}
