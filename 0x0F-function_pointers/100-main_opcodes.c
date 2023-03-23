#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments
 * @argv: array of pointer to the arguments.
 * Return: 0 when success.
 */
int main(int argc, char *argv[])
{
	char *p;
	int a, counts;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	counts = atoi(argv[1]);

	if (counts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p =(char *) main;

	for (a = 0; a < counts; a++)
	{
		if (a == counts - 1)
		{
			printf("%02hhx\n", p[a]);
			break;
		}
		printf("%02hhx ", p[a]);
	}
	return (0);
}
