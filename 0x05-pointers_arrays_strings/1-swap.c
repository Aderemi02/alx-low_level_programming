#include "main.h"

/**
 * swap_int - swapping two integers
 * @b: second integer
 * @a: - first integer
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *b;
	d = *a;
	*b = d;
	*a = c;
}
