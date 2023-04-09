#include "main.h"
/**
 * main - for copying file
 * @ac: the list of arguements
 * @av: doble pointer to the lists
 * Return: the copied file
 */

int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	res = copy_file(av[1], av[2]);
	return (res);
}
