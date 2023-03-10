#include "main.h"

/**
 * *_memcpy - pointer function to copy memory
 * @dest: the destination point to copy to
 * @src: the source value to copy
 * @n: unsigned int value to be copied from source to dest
 * Return: return the destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
