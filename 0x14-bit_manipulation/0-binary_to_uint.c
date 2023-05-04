#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary number to convert
 * Return: 0 if failed, sum if success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Bi, sum = 0;
	int i;

	if (!b)
	{
		return (0);
	}

	i = 0;

	while (b[i] != '\0')
	{
		i++;
	}

	for (i--, Bi = 1; i >= 0; i--, Bi *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			sum += Bi;
		}
	}
	return (sum);
}
