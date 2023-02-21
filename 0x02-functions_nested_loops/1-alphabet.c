#include <stdio.h>
/**
 * print_alphabet - check the code
 *
 * Return: void retuens no value.
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
