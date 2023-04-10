#include "main.h"
/**
 * set_bit - return the on bit value at index
 * @n: numbet to get its index from
 * @index: the point in the number to get its value
 * Return: 1 if success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 63)
	{
		return (-1);
	}

	p = (1 << index);
	*n = *n | p;

	return (1);
}
