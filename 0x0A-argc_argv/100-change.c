#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - to calculte change
 * @argc: amount of cents to give
 * @argv: pointer to an array of cents to be parsed
 * Return: 1 when error 0 when success
 */

int main(int argc, char *argv[])
{
	int cents, n;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	n = 0;

	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else
			if (cents >= 10)
				cents = cents - 10;
		else
			if (cents >= 5)
				cents = cents - 5;
		else
			if (cents >= 2)
				cents = cents - 2;
		else
			if (cents >= 1)
				cents = cents - 1;
	n++;
	}
	printf("%d\n", n);
	return (0);
}
