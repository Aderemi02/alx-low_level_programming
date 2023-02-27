#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string reversely
 * @s: pass a string
 *
 */

void print_rev(char *s)
{
	int i, j;
	i = strlen(s);
	char *ch[i] = s;

	for (j = i; j <= i; j--)
        {
                _putchar(ch[i] + '0');
        }
}
