#include <stdio.h>
void print_triangle(int size)
{
	int i;
	int a;
	int b;
	int c;

	if (size > 0)
	{
		b = size - 1;
		for (i = 0; i < size ; i++)
		{
			for (a = b; a > 0 ; a--)
			{
				putchar(' ');
			}

			for (c = 0; c <= i; c++)
			{
				putchar(35);
			}

			b--;

			putchar('\n');
		}

	}

	else
	{
		putchar ('\n');
	}
}
	
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
