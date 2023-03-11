#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply argument
 * @argc: count of argument
 * @argv: pointer array to each count
 * Return: 1 if success
 */

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
	}

	if (argc == 3)
	{
		int mul;
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n",mul);
	}

	return (1);
}
