#include <stdio.h>
#include <unistd.h>

/**
 *main: this is used to print using putchar
 *putchar: this is a function used to print the otuput
 *Return: 1 is returned after the function is executed
 */

int main(void)
{
	int c;
	c=write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n",61);
	return (1);
}
