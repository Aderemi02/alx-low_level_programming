#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array with specific char
 * @size: size of the array
 * @c: special character
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	 unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	p = malloc(sizeof(*p) * size);

	i = 0;

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	return (p);
}
