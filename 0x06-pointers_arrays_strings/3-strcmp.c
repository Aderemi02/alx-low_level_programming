#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: returns the value of i
 */

int _strcmp(char *s1, char *s2)
{
	
	int i;

	if (s1[0] < s2[0])
	{
		i = s1[0] - s2[0];
	}
	else
		if (s1[0] > s2[0])
		{
			i = s1[0] - s2[0];
		}
		else
		{
			i = 0;
		}
	return (i);
}
