#include "function_pointers.h"
/**
 * int_index - function to compare value
 * @array: array to be compared
 * @size: elements in the array
 * @cmp: function pointer to used for comparing
 * Return: -1 when size not 0
 * the index function return index of first element where cmp is not 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}


