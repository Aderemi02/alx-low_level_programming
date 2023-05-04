#include "main.h"
/**
 * get_endianness - this checks endianness
 * Return: 1 on success, 0 otherwise
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *p;

	p = (char *)&z);

	if (*p)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
