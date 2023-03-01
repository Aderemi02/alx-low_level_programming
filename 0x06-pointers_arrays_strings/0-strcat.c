#include "main.h"
#include <stdio.h>
/**
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destlen = 0;
	int srclen = 0;
	char *p;

	while ( src[srclen] != '\0')
	{
		srclen++;
	}

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	for ( i = (destlen -1); dest[destlen] != '\0'; i++)
	{
		dest[i] = src[srclen];
	}
	p = &(dest[i]);
	return(p);
}
