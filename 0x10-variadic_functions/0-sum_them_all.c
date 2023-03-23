#include "variadic_functions.h"
/**
 * sum_them_all - variadic function to sum all args
 * @n: number of arguments
 * Return: sum pf numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum, i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
