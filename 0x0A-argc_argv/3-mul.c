#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply argument
 * @argc: count of argument
 * @argv: pointer array to each count
 *Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc <= 1)
	{
		printf("Error\n");
	}

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
		printf("%d\n", mul);
	return (0);
}
