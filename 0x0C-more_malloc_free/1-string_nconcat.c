#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenating string
 * @s1: the first string
 * @s2: the second string
 * @n: number of characters to pick from second string
 * Return: pointer if success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, m, l, a = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	m = 0;
	while (s2[m] != '\0')
	{
		m++;
	}

	p = malloc(sizeof(*p) * (n + i));
	if (p == NULL)
	{
		return (0);
	}
	for (l = 0; l < i; l++)
	{
		p[l] = s1[l];
	}
	for (; a < n; a++, l++)
	{
		p[l] = s2[a];
	}
	return (p);
}
