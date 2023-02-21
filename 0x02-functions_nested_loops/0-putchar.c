#include <stdio.h>
/**
 *main-entry point
 *Return: return 0
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i <= 8;)
	{
		putchar(c[i]);
	++i;
	}
	putchar('\n');
	return (0);
}
