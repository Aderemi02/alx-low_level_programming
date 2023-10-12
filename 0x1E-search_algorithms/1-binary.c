#include "search_algos.h"
/**
 * binary_search - using binary search to look for a value
 * @array: where the values are stored
 * @size: size of the array
 * @value: value to search for
 * Return: value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t num = 0, middle;
	size_t first = 0;
	size_t last = size - 1;

	if ((!value) || (array == NULL))
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		num = first;

		while (num < last)
		{
			printf("%d, ", array[num]);
			num++;
		}
		printf("%d\n", array[num]);

		middle = (first + last) / 2;
		if (value == array[middle])
		{
			return (middle);
		}
		else if (value > array[middle])
		{
			first = middle + 1;
		}
		else
		{
			last = middle - 1;
		}
	}
	return (-1);
}
