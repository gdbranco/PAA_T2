#ifndef SORTS_H
#define SORTS_H
#include <stdio.h>
#include <string.h>
typedef struct _string_array
{
  char dado[6];
}string_array;
void string_swap(char* s1, char* s2);
void combsort(string_array* input,int tam);
#endif