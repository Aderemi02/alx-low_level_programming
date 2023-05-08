#include "main.h"
/**
 * main - used for copying between two files
 * @ac: number of files to be copied to and from
 * @av: list of names of the files to copy to and from
 * Return: 0 on success, exit otherwise
 */
int main(int ac, char *av[])
{
	char *buff;
	int file_to, file_fro, wrt;
	ssize_t rd = 1024;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	buff = malloc(sizeof(buff) * 1024);

	file_fro = open(av[1], O_RDONLY);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);

	while (rd == 1024)
	{
		rd = read(file_fro, buff, 1024);
		if (file_fro == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}
		wrt = write(file_to, buff, rd);
		if (file_to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}
	}
		free(buff);
		close_file(file_fro);
		close_file(file_to);
		return (0);
}

/**
 * close_file - for closing file descriptor
 * @FD: file value to be passed to check if its to be closed
 * Return: 0 on success, exit otherwise
 */
int close_file(int FD)
{
	int filedes;

	filedes = close(FD);
	if (filedes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FD);
		exit(100);
	}
	return (0);
}

