#include <stdio.h>
/**
 *main - entry point
 *Return: return 0
 */
int main(void)
{
	int c, i;

	for (i = 0; i < 9; i++)
	{for (c = 0; c < 9; c++)
		if ((c != i) && (c < i) || (c > i))
		{
		putchar(i +'0'); 
		putchar(c + '0');
		putchar(',');
		putchar(' ');
		}
                }
	putchar('\n');
	return (0);
}
