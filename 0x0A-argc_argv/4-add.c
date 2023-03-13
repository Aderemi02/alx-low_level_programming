#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add argument
 * @argc: count of argument
 * @argv: pointer array to each count
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i, sum;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
