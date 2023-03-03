#include "main.h"
/**
 * *cap_string - capitalize words of string
 *@str: the string to be capitalized
 *
 *Return: return the string value
 */

char *cap_string(char *str)
	{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if ((str[i + 1] >= 65) && (str[i + 1] <= 90))
		{
			continue;
		}
		else
		{
		str[i + 1] -= 32;
		}
		}

		if (str[i] == '.')
		{
			if (str[i + 1] == '\n')
			{
				str[i + 2] -= 32;
			}
		}

		if (str[i] == '.')
		{
			if ((str[i + 1] != ' ') && (str[i + 1] != '\n'))
			{
			str[i + 1] -= 32;
			}
		}

		if (str[i] == '\t')
		{
			str[i] = ' ';
			str[i + 1] -= 32;
		}

	}
		return (str);
}
