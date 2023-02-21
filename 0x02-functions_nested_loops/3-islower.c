#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _islower - used to identify lowercase
 * islower(c) - accepts the value of c to check if its lowercase
 * c - integral type.
 * @c - character to be checked
 * Return: 1 if character is lowercase, otherwise 0.
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
