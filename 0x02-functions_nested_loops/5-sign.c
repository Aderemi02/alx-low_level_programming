#include <stdio.h>
#include <unistd.h>
/**
 * print_sign - find the signed value
 *Return: 1 if positive, -1 if negative and 0 otherwise
 */

int print_sign(int n)
{
	int c = +1;
	int b = -1;
	int a = 0;
	if (n > 0)
	{
	putchar('c');
	return (1);
	}
	else if (n < 0)
	{
	putchar('b');
	return (-1);
	}
	else
	putchar('a');
	return(0);
}
