#include "main.h"
int closefile(int fildes);
int copy_file(const char *file_from, char *file_to);

/**
 * closefile - used to close file descriptor
 * @fildes: used to descrine the file passed
 * Return: 0 if success
 */
int closefile(int fildes)
{
	if (fildes == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fildes);
		exit(100);
	}
	return (0);
}
/**
 * copy_file - to copy a file contetn to another
 * @file_from: where the orignal file is
 * @file_to: where you are copying to
 * Return: 0 if success
 */
int copy_file(const char *file_from, char *file_to)
{
	char *buffer;
	int rd, opn, opn2, wrt;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	opn = open(file_from, O_RDONLY);
	rd = read(opn, buffer, 1024);
	opn2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wrt = write(opn2, buffer, rd);

	if (opn == -1 || rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		free(buffer);
		exit(98);
	}
	if (opn2 == -1 || wrt == -1)
	{
		dprintf(2, "Error: Cant write to file %s\n", file_to);
		free(buffer);
		exit(99);
	}
	free(buffer);
	closefile(opn);
	closefile(opn2);
	return (0);
}

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
