#include <stdio.h>
/**
 *main-entry point
 *Return: return 0
 */
int main(void)
{
	char f[] = "_putchar";
	int i;

	for (i = 0; i <= 7;)
	{
		putchar(f[i]);
	++i;
	}
	putchar('\n');
	return (0);
}
