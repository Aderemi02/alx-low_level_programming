#include "main.h"

/**
 * _strspn - find the length of prefix string
 * @s: full string
 * @accept: string to check
 * Return: return i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, i = 0;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
		{
			i++;
			break;
		}
			else if (accept[a + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
