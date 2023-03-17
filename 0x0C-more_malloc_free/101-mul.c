#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplying two numbers
 * @argc: arguments to be passed
 * @argv: numbers to be passed
 * Return: 0 if true
 */

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc < 2 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
