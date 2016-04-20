#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "sorts.h"
int main()
{
  string_array* strings;
  strings = (string_array*)malloc(3300000*sizeof(string_array));
  char aux[6];
  int tam;
  for(tam=0;scanf("%s",aux)==1;tam++)
  {
 	 
    strcpy(strings[tam].dado,aux);
  }
  merge_sort_count(strings,tam);
  printf("%lld",count);
  free(strings);
  return 0;
}
