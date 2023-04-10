#include "main.h"
/**
 * clear_bit - negates the bit value of the index
 * @n: number from which indec is to be cleared
 * @index: bit to clear/negate
 * Return: 1 if sucessful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index > 63)
	{
		return (-1);
	}

	p = (1 << index);
	if (*n & p)
	{
		*n = (*n ^ p);
	}
	return (1);
}
