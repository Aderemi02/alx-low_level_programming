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
	int mul = 1, i, j;

	if (argc <= 2)
	{
		printf("Error\n");
	}

	if (argc == 3)
	{
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	printf("%d\n", mul);
	}

	return (1);
}
