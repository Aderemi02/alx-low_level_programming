#include "main.h"

/**
 * *string_toupper - covert lowercase to upper
 * @str: the string to be converted
 * Return: returns the string in uppercase
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] -= 32;
		}
			a++;
	}
	return (str);
}
