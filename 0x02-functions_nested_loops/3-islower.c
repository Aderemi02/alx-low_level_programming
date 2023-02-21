#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _islower - used to identify lowercase
 * int c - used for accepting the value
 * _islower(c) - accepts the value of c to check if its lowercase
 *c - accepts and compare value 
 * return: 1 if lowercase.
 * return: 0 if false
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
