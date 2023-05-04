#include "main.h"
/**
 * get_bit - Gets bit at an index
 * @n: The number to find its index
 * @index: index position
 * Return: bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int z;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		z = (n >> index) & 1;
	}
	return (z);
}
