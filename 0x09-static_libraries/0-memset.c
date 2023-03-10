#include "main.h"

/**
 * *_memset - fill memory with n
 * @b: the value to be used to fill memory
 * @s: the memory space to be filled
 * @n: unsigned integer for the number of memory to be filled
 * Return: the pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
