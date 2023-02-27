#include "main.h"
/**
 * print_rev - prints a string reversely
 * @s: pass a string
 *
 */

void print_rev(char *s)
{
	int k;
	char *p;

	{
		int i = 0;
		
		while (*s != '\0')
		{
			i++;
			s++;
		}
	}

	p = s;

	for (k = 0; p[k]; k++)
	{
		_putchar(p[k]);
	}
	_putchar('\n');
}
