#include <stdio.h>
#include <unistd.h>

/**
 * main: this is used to print using write function
 * write: this is a function used to print the output
 * Return: 1 is returned after the function is executed
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
