#include "sorts.h"

void insertion_sort(string_array *a, int size) {
    int i, j;
    char atual[10];

    for (i = 1; i < size; i++){
        strcpy(atual, a[i].dado);
        j = i - 1;

        while ((j >= 0) && strcmp(atual, a[j].dado) < 0){
            strcpy(a[j + 1].dado, a[j].dado);
            j = j - 1;
        }
    
        strcpy(a[j + 1].dado, atual);
    }
}
