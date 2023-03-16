#include "main.h"
#include <stdlib.h>
/**
 * array_range - prints range of arrays of integers
 * @min: the minimum integer
 * @max: the maximum integer
 * Return: p when success
 */

int *array_range(int min, int max)
{
	int *p;
	int c, i, j;

	if (min > max)
	{
		return (NULL);
	}

	i = 0;
	c = min;

	while (c <= max)
	{
		c++;
		i++;
	}

	p = malloc(sizeof(*p) * i);

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		p[j] = min++;
	}
	return (p);
}
