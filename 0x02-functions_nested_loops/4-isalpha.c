#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - to check for upper and lower case alphabet
 * Return: 1 if true otherwise 0.
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
