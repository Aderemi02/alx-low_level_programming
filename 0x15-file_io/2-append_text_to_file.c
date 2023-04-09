#include "main.h"
/**
 * append_text_to_file - apeending new content to a file
 * @filename: name of the file to be appended to
 * @text_content: content to add to the file
 * Return: 1 if success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wrt, opn, stlen = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[stlen] != '\0')
	{
		stlen++;
	}

	opn = open(filename, O_RDWR | O_APPEND);
	wrt = write(opn, text_content, stlen);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);
	return (1);
}
