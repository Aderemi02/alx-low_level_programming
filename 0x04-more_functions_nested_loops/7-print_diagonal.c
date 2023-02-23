#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n - used to parse the number of diagonal line
 * @i - to iterate printing of line
 * @j - to iterate spaces before diagonal
 * Return: no value returned.
 */
void print_diagonal(int n)
{
        if (n <= 0)
                {
                        _putchar('\n');
                }
        else
        {
                int i,j;

                for (i = 0; i < n; i++)
                {
                        for (j = 0; j < n; j++)
                        {
                                if (j == i)
                                {
                                        _putchar(92);
                                }
                                else if ( j < i)
                                {
                                        _putchar(' ');
                                }
                        }
                        _putchar('\n');
                }
        }
}
