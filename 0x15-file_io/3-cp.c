#include "main.h"
int clos_fil(int fildes);
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
 * main - for copying file
 * @ac: the list of arguements
 * @av: doble pointer to the lists
 * Return: the copied file
 */
int main(int ac, char *av[])
{
	char *buffer;
	int file_to, file_from, wrt;
	ssize_t rd = 1024;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_to);
		exit(99);
	}
	while (rd == 1024)
	{
		rd = read(file_from, buffer, 1024);
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", file_from);
			free(buffer);
			exit(98);
		}
		wrt = write(file_to, buffer, rd);
		if (file_to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_to);
			free(buffer);
			exit(99);
		}
		file_to = open(av[2], O_WRONLY, 0664);
	}
	free(buffer);
	clos_fil(file_from);
	clos_fil(file_to);
	return (0);
}
