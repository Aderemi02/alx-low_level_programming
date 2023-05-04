#include "main.h"
/**
 * clear_bit - sets a bit to 0 at an index
 * @n: number from where the index is to be set to 0
 * @index: the number to set to 0
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int z;

	if (index > 63)
	{
		return (-1);
	}

	z = (1 << index);
	if (*n & z)
	{
		*n = (*n ^ z);
	}
	return (1);
}
