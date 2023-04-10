#include "main.h"
/**
 * get_endianness - getting to know the first byte represented
 * Return: 1 if true, 0 otherwise
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *ptr;

	ptr = (char *)&p;

	if (*ptr)
	{
		return (1);
	}
	else
		return (0);
}
