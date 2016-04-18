#include "sorts.h"
void string_swap(string_array *strings, int i, int j)
{
    char aux[10];
    strcpy(aux,strings[i].dado);
    strcpy(strings[i].dado,strings[j].dado);
    strcpy(strings[j].dado,aux);
}