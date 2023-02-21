#include <ctype.h>
#include <stdio.h>
/**
 *
 *
 */

int _islower(int c)
{
	int r;
	r = islower(c);
	putchar('0' + r);
	putchar('\n');
	return 1;
}
