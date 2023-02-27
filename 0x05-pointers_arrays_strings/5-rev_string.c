#include "main.h"
/**
 * rev_string - prints a reverse string
 *@s: A pointer to an int that will be changed
 *
 *Return: void
 */

void rev_string(char *s)
{
	char *star, *end, p;
	int i, inc;
	int length = 0;

	for (i = 0; s[i]; i++)
	{
		length++;
	}

	inc = length;

	star = s;
	end = s;


	for (i = 0; i < inc - 1; i++)
	{
		end++;
	}


	for (i = 0; i < inc / 2; i++)
	{


		p = *end;
		*end = *star;
		*star = p;


		star++;
		end--;
	}
}
