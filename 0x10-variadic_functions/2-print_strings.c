#include "variadic_functions.h"
/**
 * print_strings - printing strings in a variadic function
 * @separator: the separator between strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list arg;

	va_start(arg, n);

		for (i = 0; i < n; i++)
		{
			p = va_arg(arg, char *);

			if (p)
			{
				printf("%s", p);
			}
			else
			{
				printf("nil");
			}

			if (separator && i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	va_end(arg);
	printf("\n");
}
