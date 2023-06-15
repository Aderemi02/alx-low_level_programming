#include "lists.h"
/**
 * print_dlistint - counting the number of element in the list
 * @h: pointer to the beginning of the list
 * Return: the number of element in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
