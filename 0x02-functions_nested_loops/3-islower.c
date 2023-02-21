#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _islower - used to identify lowercase
 * _islower(int c) - return 1 value
 * int c - used for accepting the value
 * _islower(c) - accepts the value of c to check if its lowercase
 * c - accepts and compare value
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
