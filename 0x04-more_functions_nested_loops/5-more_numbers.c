#include "main.h"
/**
 * more_numbers - prints 10 times the number 0 - 14
 * @i - used for iteration
 * @a - used for printing the numbers 0 - 14
 */

void more_numbers(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
}
