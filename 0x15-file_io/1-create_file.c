#include "main.h"
/**
 * create_file - creates a new file and writes text_content to it
 * @filename: the file to create
 * @text_content: the content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int wrt, opn, stlen = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[stlen] != '\0')
	{
		stlen++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC. 0600);
	wrt = write(opn, text_content, stlen);

	if (wrt == -1 || opn == -1)
		return (-1);

	close(opn);
	return (1);
}
