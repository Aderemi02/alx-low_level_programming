#include "main.h"
/**
 * print_triangle - prints the triangle
 * @size - specify the size of the triangle
 * Return: returns no value
 */
void print_triangle(int size)
{
        int i;
        int a;
        int b;
        int c;

        if (size > 0)
        {
                b = size - 1;
                for (i = 0; i < size ; i++)
                {
                        for (a = b; a > 0 ; a--)
                        {
                                putchar(' ');
                        }

                        for (c = 0; c <= i; c++)
                        {
                                putchar(35);
                        }

                        b--;

                        putchar('\n');
                }

        }

        else
        {
                putchar ('\n');
        }
}
