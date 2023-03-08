#include "main.h"

/**
 * factorial - finds factorial of a number
 * @n: factorial to be found
 * Return: the value of the factorial.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
