#include "main.h"
/**
 * print_binary - prints a binary number
 * @n: the number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
	int p = 63, l = 0;

	for (; p >= 0; p--)
	{
		m = n >> p;
		if (m & 1)
		{
			_putchar('1');
			l++;
		}

		else if (l)
		{
			_putchar('0');
		}
	}
	if (!l)
	{
		_putchar('0');
	}
}
