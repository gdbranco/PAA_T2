#include "sorts.h"

void mergeinsert_sort (string_array *a, int n, int k) {
	if(n <= k)
	{
		insertion_sort(a,n);
	}
	else
	{
		int m = n / 2;
	    mergeinsert_sort(a, m, k);
	    mergeinsert_sort(a + m, n - m, k);
	    merge(a, n, m);
	}
}
