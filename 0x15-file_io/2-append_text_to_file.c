#include "main.h"
/**
 * append_text_to_file - appending texts to already created file
 * @filename: the file to be appended to
 * @text_content: content to be appended to file
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wrt, opn, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	opn = open(filename, O_RDWR | O_APPEND);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);
	return (1);
}
