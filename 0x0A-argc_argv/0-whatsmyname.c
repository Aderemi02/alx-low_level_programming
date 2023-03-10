#include "main.h"
#include <stdio.h>

/**
 * main - writing names
 * @argc: counting number of arguments
 * @argv: vector of an argument
 * Return: 0 if success
 *
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
