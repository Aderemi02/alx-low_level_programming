#include "main.h"
/**
 * prime_no - used for recursive function of prime number
 * @n: integer to check
 * @c: prime number divisor
 * Return: 1 if true
 *
 */

int prime_no(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime_no(n, c + 1));
}

/**
 * is_prime_number - check for prime number
 * @n: integer to check
 * Return: 1 if true
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}

	if (n <= 0)
	{
		return (0);
	}

	else
	{
		return (prime_no(n, 2));
	}
}

