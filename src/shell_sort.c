#include "sorts.h"

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
