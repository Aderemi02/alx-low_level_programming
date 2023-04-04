#include "lists.h"
/**
 * print_listint - function to print list of integers
 * @h: header pointer to the nodes
 *
 * Return: return the nuumber of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t m;

	m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}

	return (m);
}
