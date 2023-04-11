#include "main.h"
int clos_fil(int fildes);
int copy_file(const char *file_from, char *file_to);

/**
 * clos_fil - used to close file descriptor
 * @fildes: used to descrine the file passed
 * Return: 0 if success
 */
int clos_fil(int fildes)
{
	int dess;

	dess = close(fildes);

	if (dess == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildes);
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
	int opn, opn2, wrt;
	ssize_t rd = 1024;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	opn = open(file_from, O_RDONLY);
	opn2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	while (rd == 1024)
	{
		rd = read(opn, buffer, 1024);
		if (opn == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			free(buffer);
			exit(98);
		}
		wrt = write(opn2, buffer, rd);
		if (opn2 == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant write to file %s\n", file_to);
			free(buffer);
			exit(99);
		}
		opn2 = open(file_to, O_WRONLY, 0664);
	}
	free(buffer);
	clos_fil(opn);
	clos_fil(opn2);
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = copy_file(av[1], av[2]);
	return (res);
}
