#ifndef SORTS_H
#define SORTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct _string_array
{
  char dado[6];
}string_array;
void string_swap(string_array *strings, int i, int j);
void comb_sort(string_array* input,int tam);
void selection_sort (string_array *a, int n);
void shell_sort (string_array *a, int n);
void insertion_sort(string_array *a, int n);
void bubble_sort (string_array *a, int n);
void merge (string_array *a, int n, int m);
void merge_sort (string_array *a, int n);
void merge_insert(string_array *a, int n, int k);
#endif
