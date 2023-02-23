#include "main.h"
/**
 * print_line - prints a straight line
 * @n - prints the number of line parsed
 * Return: doesnt return any value
 */
void print_line(int n)
{
        while ( n > 0)
        {
        if (n <= 0)
                {
                        _putchar('\n');
                }
                _putchar(95);
                n--;
        }
	_putchar('\n');
}
