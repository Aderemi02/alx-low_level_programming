#include "search_algos.h"
/**
 * linear_search - searches for a value in an array and return position
 * @array: arry to search
 * @size: length of array
 * @value: value to search
 * Return: position if found. -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t num = 0;

	while ((num < size) && (array))
	{
		if (*(array + num) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)num, *(array + num));
			return (num);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)num, *(array + num));
		}
		num++;
	}
	return (-1);
}
