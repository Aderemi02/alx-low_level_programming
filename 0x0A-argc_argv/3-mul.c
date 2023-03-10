#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply argument
 * @argc: count of argument
 * @argv: pointer array to each count
 *Return: 1 if success
 */

int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
