#include "main.h"
/**
 * print_binary - converting to binary using shifts
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	int p, T = 0;
	unsigned long int m;

	for (p = 80; p >= 0; p--)
	{
		m = n >> p;
		if (m & 1)
		{
			_putchar('1');
			T++;
		}
		else if (T)
		{
			_putchar('0');
		}
	}
	if (!T)
	{
		_putchar('0');
	}

}
