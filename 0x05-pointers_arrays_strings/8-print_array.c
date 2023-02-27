#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array elements
 * @a: pass array name
 * @n: pass array size
 * @t: used for iteration
 */

void print_array(int *a, int n)
{
	int t;
	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
	if (t != (n-1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
