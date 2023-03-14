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

	int i, j, k, l, m;

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

	k = i + j;

	p = malloc(sizeof(*p) * (k + 1));

	if (p == NULL)
	{
		p = "";
	}

	for (l = 0; l < i; l++)
	{
		p[l] = s1[l];
	}

	for (m = 0; l <= k; m++, l++)
	{
		p[l] = s2[m];
	}
	return (p);
}

