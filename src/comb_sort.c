#include "sorts.h"
void comb_sort(string_array* a,int size) {
  float shrink_factor = 1.247330950103979;
  int gap = size, swapped = 1, i;

  while (gap > 1 || swapped) {
    if (gap > 1)
    gap = gap / shrink_factor;

    swapped = 0;
    i = 0;

    while (gap + i < size) {
      if (strcmp(a[i].dado, a[i + gap].dado) > 0) {
        string_swap(a,i,i+gap);
        swapped = 1;
      }
      ++i;
    }
  }
}