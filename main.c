#include <stdio.h>
#include <stdlib.h>
#include "sorts.h"
int main()
{
  string_array* strings;
  strings = (string_array*)malloc(3300000*sizeof(string_array));
  char aux[6];
  int tam,i;
  for(tam=0;scanf("%s",aux)==1;tam++)
  {
 	 
    strcpy(strings[tam].dado,aux);
  } 
  combsort(strings,tam);
  for(i=0;i<tam;i++)
  {
  	printf("%s\n",strings[i].dado);
  }
  free(strings);
  return 0;
}
