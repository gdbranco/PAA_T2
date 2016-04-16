#include "sorts.h"

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
