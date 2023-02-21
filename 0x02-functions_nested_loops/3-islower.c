#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _islower - used to identify lowercase
 * _islower(c) - accepts the value of c to check if its lowercase
 * @c - accepts and compare value
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
