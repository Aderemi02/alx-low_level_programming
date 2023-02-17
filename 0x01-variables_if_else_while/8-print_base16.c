#include <stdio.h>

/**
 *main - Block of character
 *Return: always 0 success
 */

int main(void)
{
	int c = 0;
        {
                for (c = 0; c <= 15; ++c)
                        putchar('0' + c);
                printf("\n");
        }
return (0);
}

