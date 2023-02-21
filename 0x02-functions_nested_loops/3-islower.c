#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _islower - used to identify lowercase
 * c: used for accepting the value
 * return: 1 if lowercase.
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
