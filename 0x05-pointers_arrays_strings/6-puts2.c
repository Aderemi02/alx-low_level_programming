#include "main.h"
/**
 * puts2 - prints strings divisible by 2
 *
 * @str: accepts strings from calling function
 */

void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
			_putchar (str[c]);
	}

	_putchar ('\n');
}
