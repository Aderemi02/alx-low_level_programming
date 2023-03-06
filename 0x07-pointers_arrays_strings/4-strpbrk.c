#include "main.h"

/**
 * *_strpbrk - compare dest to source string
 * @s: the dest string
 * @accept: source string
 * Return: s if true '\0' otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
	if (*s == accept[i])
	{
		return (s);
	}
	}
	s++;
	}
	return ('\0');
}
