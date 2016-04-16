#include "sorts.h"
void string_swap(string_array *strings, int i, int j)
{
    char aux[6] = "";
    strcpy(aux,strings[i].dado);
    strcpy(strings[i].dado,strings[j].dado);
    strcpy(strings[j].dado,aux);
}
void comb_sort(string_array *a, int tam) {
  int i, j, gap, swapped = 1;
  
  gap = tam;
  while (gap > 1 || swapped == 1)
  {
    gap = gap * 10 / 13;
    if (gap == 9 || gap == 10) gap = 11;
    if (gap < 1) gap = 1;
    swapped = 0;
    for (i = 0, j = gap; j < tam; i++, j++)
    {
      if (strcmp(a[i].dado,a[j].dado)>0)
      {
        string_swap(a,i,j);
        swapped = 1;
      }
    }
  }
}

void selection_sort(string_array *a, int n) {
    int i, j, m;
    for (i = 0; i < n; i++) {
        for (j = i, m = i; j < n; j++) {
            if (strcmp(a[j].dado,a[m].dado)<0){
                m = j;
            }
        }
        string_swap(a,i,m);
    }
}

void shell_sort (string_array *a, int n) {
    int h, i, j;
    string_array t;
    for (h = n; h /= 2;) {
        for (i = h; i < n; i++) {
            strcpy(t.dado,a[i].dado);
            for (j = i; j >= h && strcmp(t.dado,a[j-h].dado)<0; j -= h) {
                strcpy(a[j].dado,a[j-h].dado);
            }
            strcpy(a[j].dado,t.dado);
        }
    }
}

void insertion_sort(string_array *a, int n) {
    size_t i = 1;
    for(i=1; i < n; ++i) {
        string_array tmp;
        strcpy(tmp.dado,a[i].dado);
        size_t j = i;
        while(j > 0 && strcmp(tmp.dado,a[j-1].dado)<0) {
            strcpy(a[j].dado,a[j-1].dado);
            --j;
        }
        strcpy(a[j].dado,tmp.dado);
    }
}

void bubble_sort (string_array *a, int n) {
    int i, s = 1;
    while (s) {
        s = 0;
        for (i = 1; i < n; i++) {
            if (strcmp(a[i].dado,a[i-1].dado)<0) {
                string_swap(a,i,i-1);
                s = 1;
            }
        }
    }
}

void merge (string_array *a, int n, int m) {
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
 
void merge_sort (string_array *a, int n) {
    if (n < 2)
        return;
    int m = n / 2;
    merge_sort(a, m);
    merge_sort(a + m, n - m);
    merge(a, n, m);
}

void merge_insert(string_array *a, int n, int k)
{
	if(k < valor)
	{
		insertion_sort(a,n);
	}
	else
	{
		merge_sort(a,n);
	}
}
