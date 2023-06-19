#include "main.h"
/**
 * *_strncat - to concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * @n: number of source byte
 * Return: return destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int destlen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}

	return (dest);
}
