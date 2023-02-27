#include "main.h"
/**
 * _puts - prints a string
 * @str: pass string
 */

void _puts(char *str)
{
	char *p;
	int t;

	p = str;

	for (t = 0; p[t]; p++)
	{
		_putchar(p[t]);
	}
	_putchar('\n');
}
