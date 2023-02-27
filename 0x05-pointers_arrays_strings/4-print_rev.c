#include "main.h"
/**
 * print_rev - prints a string reversely
 * @s: pass a string
 *
 */

void print_rev(char *s)
{
	int k;

	int i = 0;

		while (s[i] != '\0')
		{
			i++;
		}

	for (k = i - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
