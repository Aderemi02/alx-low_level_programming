#include "main.h"
/**
 * print_square - prints square usinc #
 * @size - used to define the size of square
 * @i - used to iterate the length of the square
 * @j - used to iterate the breath of the square
 */
void print_square(int size)
{
        if (size <= 0)
        {
                _putchar('\n');
        }
        else
        {
                int i,j;

                for (i = 0; i < size; ++i)
                {
                        for (j = 1; j < size; ++j)
                        {
                                _putchar(35);
                        }
                        _putchar(35);
                        _putchar('\n');
                }
        }
}