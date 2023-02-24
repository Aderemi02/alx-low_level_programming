#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */

int main(void)

{
	long a, i;

	a = 612852475143;
	for (i = 2; i < a; i++)
	{
		while (a % i == 0)
			a = a / i;
	}

	printf("%lu\n", a);

	return (0);
}
