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
                        putchar('\n');
                }
                putchar(95);
                n--;
        }
        putchar('\n');
}
