#include "sorts.h"

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
