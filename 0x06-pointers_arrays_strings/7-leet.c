#include "main.h"
/**
 * *leet - used to switch characters for numbers
 * @s: used to point to string in the main function
 *
 * Return: s is returned.
 */

char *leet(char *s)
{
	int i, j;
	char p[] = "aAeEoOtTlL";
	char q[] = "4433007711";
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == p[j])
			{
				s[i] = q[j];
			}
		}
	}
	return (s);
}
