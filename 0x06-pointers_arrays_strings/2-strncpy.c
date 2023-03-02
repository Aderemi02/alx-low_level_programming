#include "main.h"
/**
 * *_strncpy - copies source string of n byte to destination string
 * @dest: destination string
 * @src: source string
 * @n: the number of bytes of source string that should be copied
 * Return: returns destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int destlen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
