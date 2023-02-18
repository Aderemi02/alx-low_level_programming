#include <stdio.h>
/**
 *main - entry point
 *Return: return 0
 */
int main(void)
{
	int c,i;

	for (i = 0; i <= 9; i++)
	{for (c = 0; c <= 9; c++)
	{
		putchar(i + '0');
		putchar(c + '0');
		if ((i < 9) || (c < 9))
		{
			putchar(',');
			putchar(' ');
		}
		else if ((i == 9) && (c == 9))
		{
			putchar('\n');
		}
	}
	}
	return (0);
}
