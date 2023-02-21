#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
   char c = 'a';
   for(c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	 putchar('\n');
}

int main (void)
{
		print_alphabet();
  return (0);
}
