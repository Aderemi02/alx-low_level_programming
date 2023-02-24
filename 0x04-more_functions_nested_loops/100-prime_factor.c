#include <stdio.h>
/**
 * main - finds the prime factor
 *Return: 0 when true
 */

int main(void)
{
	long int a = 612852475143, i;

	for (i = 2; i < a; i++)
	{
		while ((a % i) == 0)
			a = a / i;
	}
	printf("%ld is the largest prime factor \n", a);

	return (0);
}


