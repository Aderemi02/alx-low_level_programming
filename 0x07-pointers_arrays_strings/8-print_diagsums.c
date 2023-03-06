#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: array
 * @size: size of array
 * Return: returns no value.
 */
void print_diagsums(int *a, int size)
{
	int sum = 0, add = 0, x;

	for (x = 0; x < size; x++)
	{
		sum = sum + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		add += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sum, add);
}
