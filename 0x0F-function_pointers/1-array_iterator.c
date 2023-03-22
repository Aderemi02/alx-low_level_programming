#include "function_pointers.h"
/**
 * array_iterator - function to call function pointer
 * @array: array of the function pointer
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!size || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
