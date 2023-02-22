#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */

void print_to_98(int n)
{
	{
		for (; n <= 98; n++)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
	}
	}

	{
		for (; n >= 98; n--)
		{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
		}		
	}
}
		
