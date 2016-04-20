#include "sorts.h"
long long int count = 0;
void merge_count (string_array *a, int n, int m) {
   	string_array *aux = malloc(n*sizeof(string_array));
	int i,j,k;
	for(i=0,j=m,k=0;k<n;k++)
	{
		if(j==n)//Andou a metade da direita até o fim, adiciona o lado da esquerda
		{
			strcpy(aux[k].dado,a[i].dado);
			i++;
		}
		else if(i==m)//Andou a metade da esqueda até o fim adiciona o lado da direita
		{
			strcpy(aux[k].dado,a[j].dado);
			j++;
		}
		else if(strcmp(a[j].dado,a[i].dado)<0)//Se o lado da direita for menor que o lado da esquerda adiciona o menor
		{
			strcpy(aux[k].dado,a[j].dado);
			j++;
			count+=m - i;
		}
		else//Mesmo do anterior mas ao contrario
		{
			strcpy(aux[k].dado,a[i].dado);
			i++;
		}
	}
	for(i=0;i<n;i++)//Joga tudo na lista novamente
	{
		strcpy(a[i].dado,aux[i].dado);
	}
	free(aux);
}
 
void merge_sort_count (string_array *a, int n) {
    if (n < 2)
        return;
    int m = n / 2;
    merge_sort_count(a, m);
    merge_sort_count(a + m, n - m);
    merge_count(a, n, m);
}
