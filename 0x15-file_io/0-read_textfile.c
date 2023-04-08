#include "main.h"
/**
 * read_textfile - reads textfile to standard output
 * @letters: number of letters to read
 * @filename: pointer to the file to be read from
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t rd, wrt, ch;

	ch = open(filename, O_RDONLY);
	ptr = malloc(sizeof(char) * letters);

	if (ch == -1 && ptr == NULL)
		return (0);

	rd = read(ch, ptr, letters);
	wrt = write(STDOUT_FILENO, ptr, rd);
	free(ptr);
	close(ch);
	return (wrt);
}
