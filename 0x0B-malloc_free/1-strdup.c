#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: string to be duplicated
 * Return: pointer if success
 */

char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
	{
		return (0);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc(sizeof(*p) * i + 1);

	if (p == NULL)
	{
		return (0);
	}

	j = 0;

	while (str[j] != '\0')
	{
		p[j] = str[j];
		j++;
	}
	return (p);
	free(p);
}
