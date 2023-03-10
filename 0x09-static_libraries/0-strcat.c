#include "main.h"
#include <stdio.h>
/**
 * *_strcat - to concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: return destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destlen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);
}
