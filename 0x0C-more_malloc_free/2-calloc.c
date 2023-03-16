#include "main.h"
#include <stdlib.h>
/**
 * _calloc - create an array and initialize to 0
 * @nmemb: number of elements to be created
 * @size: size of each element in byte
 * Return: arry when success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arry;
	unsigned int a;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	arry = malloc(nmemb * size);

	if (arry == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		arry[a] = 0;

	return (arry);
}
