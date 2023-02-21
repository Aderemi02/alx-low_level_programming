#include <stdio.h>

/**
 * print_alphabet_x10 - writes the alphabet x10
 *Return: no value
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;
	
for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			putchar(c);
		putchar('\n');
	}
}
