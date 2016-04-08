#include "sorts.h"
void string_swap(string_array *strings, int i, int j)
{
    char aux[6] = "";
    strcpy(aux,strings[i].dado);
    strcpy(strings[i].dado,strings[j].dado);
    strcpy(strings[j].dado,aux);
}
void combsort(string_array *input, int tam) {
    const float reduz = 1.3f;
    size_t i, gap = tam;
    int trocou = 0;

    while ((gap > 1) || trocou) {
        if (gap > 1) {
            gap = (size_t)((float)gap / reduz);
        }

        trocou = 0;

        for (i = 0; gap + i < tam; ++i) {
            if (strcmp(input[i].dado, input[i + gap].dado)>0) {
                string_swap(input,i,i+gap);
                trocou = 1;
            }
            if (strcmp(input[i].dado, input[i + gap].dado)==0) {
                trocou = 1;
            }
        }
    }
}
