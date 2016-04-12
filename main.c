#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "sorts.h"
int main()
{
  struct timeval start,end;
  string_array* strings;
  strings = (string_array*)malloc(3300000*sizeof(string_array));
  char aux[6];
  int tam,i;
  for(tam=0;scanf("%s",aux)==1;tam++)
  {
 	 
    strcpy(strings[tam].dado,aux);
  }
  gettimeofday(&start,NULL); 
  combsort(strings,tam);
  gettimeofday(&end,NULL);
  double delta = ((end.tv_sec  - start.tv_sec) * 1000000u + end.tv_usec - start.tv_usec) / 1.e6;
  printf("%lf\n",delta);
  /*for(i=0;i<tam;i++)
  {
  	printf("%s\n",strings[i].dado);
  }*/
  free(strings);
  return 0;
}
