#include <stdio.h>
/**
 * main - writes the FizzBuzz
 * @a: - used to iterate integer from 1 - 100
 * Return: 0 when true.
 */
int main(int a)
{
	for (a = 1; a <= 100; a++)
	{
		if ((a % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			if ((a % 3) == 0)
			{
				printf("Fizz ");
			}
			else
			{
				if ((a % 5) == 0)
				{
					printf("Buzz ");
				}
				else
				{
					printf("%d ", a);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
