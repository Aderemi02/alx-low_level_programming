#include "main.h"
/**
 * *leet - used to switch characters for numbers
 * @str: used to point to string in the main function
 *
 * Return: str is returned.
 */

char *leet(char *str)
	{
	int i, j;
	char p[] = "aAeEoOtTlL";
	char q[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == p[j])
			{
				str[i] = q[j];
			}
		}
	}
	return (str);
	}
