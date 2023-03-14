#include "main.h"
#include <stdlib.h>
/**
 * str_concat - to concantenate two strings
 * @s1: the first string
 * @s2: second string
 * Return: pointer when success
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, l, m;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (s2[j] != '\0')
	{
		j++;
	}
	p = malloc(sizeof(*p) * (i + j + 1));
	if (p == NULL)
	{
		return (0);
	}
	for (l = 0; l < i; l++)
	{
		p[l] = s1[l];
	}
	for (m = 0; l <= (i + j); m++, l++)
	{
		p[l] = s2[m];
	}
	return (p);
}
