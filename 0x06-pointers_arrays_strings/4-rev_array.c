#include "main.h"

/**
 * reverse_array - print array in reverse
 *@a: the array
 *@n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int b, rev;

	for (b = 0; b < n; b++)
	{
		n--;
		rev = a[b];
		a[b] = a[n];
		a[n] = rev;
	}
}


