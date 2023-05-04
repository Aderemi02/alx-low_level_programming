#include "main.h"
/**
 * set_bit - set bit to 1 at given index
 * @n: number to get index from
 * @index: index to get
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;

	if (index > 63)
	{
		return (-1);
	}

	z = (1 << index);
	*n = *n | z;

	return (1);
}
