#include "lists.h"
/**
 * print_listint - function to print list of integers
 * @h: header pointer to the nodes
 *
 * Return: return the nuumber of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t m;

	m = 0;

	while (h != NULL)
	{
		h = h->next;
		m++;
	}
	
	return (m);
}
