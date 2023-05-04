#include "main.h"
/**
 * flip_bits - counts number of bits needed to be flipped
 * to get one number to another
 * @n: main number
 * @m: number to be flipped
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pos, res;
	int cnt = 0, z = 63;

	res = n ^ m;

	for (; z >= 0; z--)
	{
		pos = res >> z;
		if (pos & 1)
			cnt++;
	}
	return (cnt);
}
