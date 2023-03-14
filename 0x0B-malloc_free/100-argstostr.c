#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all args in the prog
 * @ac: arguement count
 * @av: list of strings to concatenate
 * Return: return string
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int a, b, cnt = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;

	while (a < ac)
	{
		b = 0;

		while (av[a][b] != '\0')
		{
			cnt++;
			b++;
		}
		a++;
	}
	cnt = cnt + ac + 1;
	p = malloc(sizeof(*p) * cnt);

	if (p == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			p[c] = av[a][b];
			c++;
		}
		p[c] = '\n';
		c++;
	}
	return (p);
}
