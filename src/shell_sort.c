#include "sorts.h"

void shell_sort (string_array *a, int size) {
    int i , j;
    int gap = 1;
    char value[10];
    
    while(gap < size){
        gap = 3*gap+1;
    }
    while(gap > 1) {
        gap /= 3;
        for(i = gap; i < size; i++) {
            strcpy(value, a[i].dado);
            j = i - gap;
            while (j >= 0 && strcmp(value, a[j].dado) < 0 ){
                strcpy(a[j + gap].dado, a[j].dado);
                j -= gap;
            }
            strcpy(a[j + gap].dado, value);
        }
    }
}
