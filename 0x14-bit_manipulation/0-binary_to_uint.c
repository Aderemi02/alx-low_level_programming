#include "main.h"
/**
 * binary_to_uint - convert binary to base 10
 * @b: pointer to the binary number
 * Return: base10 if success, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int B2, sum = 0;
	int n;

	if (!b)
	{
		return (0);
	}

	n = 0;

	while (b[n] != '\0')
	{
		n++;
	}

	for (n--, B2 = 1; n >= 0; n--, B2 *= 2)
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}

		if (b[n] & 1)
		{
			sum += B2;
		}
	}
	return (sum);
}
