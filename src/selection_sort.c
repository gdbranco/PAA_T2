#include "sorts.h"

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
