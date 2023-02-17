#include <stdio.h>

/**
 *main - Block of character
 *Return: always 0 success
 */

int main(void)
{
        char c = 'a';
	char d = 'A';
	{
		for (c = 'a'; c <= 'z'; ++c)
			putchar(c);
	}
	
	{
		for (d = 'A'; d<= 'Z'; ++d)
			putchar(d);
		putchar('\n');
	}
return (0);
}
