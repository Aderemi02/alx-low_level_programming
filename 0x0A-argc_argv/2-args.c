#include <stdio.h>
/**
 * main - printing all argument
 * @argc: counting all arguements
 * @argv: argument vectors to be printed
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
