#include "main.h"
/**
 * print_triangle - prints the triangle
 * @size - specify the size of the triangle
 * Return: returns no value
 */
void print_triangle(int size)
{
	int i, a, b, c;

	if (size > 0)
	{
		b = size - 1;
		for (i = 0; i < size ; i++)
		{
			for (a = b; a > 0 ; a--)
			{
				_putchar(' ');
			}
			for (c = 0; c <= i; c++)
			{
				_putchar(35);
			}
			b--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
