#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a two dimensional array pointer
 * @width: length of array
 * @height: height of array
 * Return: p when success
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	if (p[i] == NULL)
	{
		for (i = i - 1; i >= 0; i--)
		{
			free(p[i]);
		}
		free(p);
		return (0);
	}
	}

	for (i = 0; j < width; j++)
	{
		p[i][j] = 0;
	}
	return (p);
}
