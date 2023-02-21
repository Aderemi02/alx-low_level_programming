#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _islower - used to identify lowercase
 * <F2>islower(c) - accepts the value of c to check if its lowercase
 * int c - parameter to be parsed.
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
