#include <stdio.h>

/**
 * print_sign - find the signed value
 *Return: 1 if positive, -1 if negative and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
	putchar('0' + 43);
	return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
		return(0);
}
