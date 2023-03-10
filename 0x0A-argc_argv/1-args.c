#include <stdio.h>
/**
 * main - print number of argument
 * @argc: number of arg count
 * @argv: pointer to vector
 * Return: 0 for success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
