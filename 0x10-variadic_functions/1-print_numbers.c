#include "variadic_functions.h"
/**
 * print_numbers - variadic function to print number with a separator
 * @separator: the separator inbetween the numbers
 * @n: number of argument to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));

			if (separator && i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	va_end(args);
	printf("\n");
}
