#include "lists.h"
/**
 * list_len - function to return number of nodes
 * @h: pointer to the list of valuesi
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
