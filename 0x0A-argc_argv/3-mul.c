#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply argument
 * @argc: count of argument
 * @argv: pointer array to each count
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
