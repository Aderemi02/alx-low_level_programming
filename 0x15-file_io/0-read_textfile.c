#include "main.h"
/**
 * read_textfile - reads a text from and print it
 * @filename: the file to read from
 * @letters: number of letters to read and print
 * Return: number of printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *pt;
	ssize_t wrt, opn, rd;

	opn = open(filename, O_RDONLY);
	pt = malloc(sizeof(pt) * letters);

	if (opn == -1 || pt == NULL)
		return (0);

	rd = read(opn, pt, letters);
	wrt = write(STDOUT_FILENO, pt, rd);
	free(pt);
	close(opn);
	return (wrt);
}
