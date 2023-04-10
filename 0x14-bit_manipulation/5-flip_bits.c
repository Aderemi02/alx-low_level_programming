#include "main.h"
/**
 * flip_bits - counting number of bits to flip to get another value
 * @n: initial number
 * @m: converted number
 * Return: number of bit flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0, p;
	unsigned long int postn, comb;

	comb = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		postn = comb >> p;
		if (postn & 1)
			counter++;
	}

	return (counter);
}
