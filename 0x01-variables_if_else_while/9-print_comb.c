#include <stdio.h>
/**
 * main -main block
 * Description: to print number combination
 * Return: 0 when successful
 */

int main(void)
{
	int c = 0;
	

	for (c = 0; c <= 9; ++c)
	{
		putchar('0' + c);
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
