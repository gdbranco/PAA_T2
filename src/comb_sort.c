#include "sorts.h"
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
