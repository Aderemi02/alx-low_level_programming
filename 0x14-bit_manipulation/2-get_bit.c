#include "main.h"
/**
 * get_bit - to get a bit at an index
 * @n: number to find its index
 * @index: position of the bit to be returned
 * Return: return bit value, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int p;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		p = (n >> index) & 1;
	}
	return (p);
}
