#include "main.h"
/**
 * _sroot - finds the integer is a has natural root
 * @n: number to find its root
 * @c: the root divisor
 * Return: -1 if no natural root.
 */

int _sroot(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + _sroot(n, c + 1));
}

/**
 * _sqrt_recursion - square root of an integer
 * _sroot - finds if the integer is a has natural root.
 * @n: integer to find its square root
 * Return: -1 if not a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (0 + _sroot(n, 2));
}

