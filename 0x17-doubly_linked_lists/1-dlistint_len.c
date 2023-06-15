#include "lists.h"
/**
 * dlistint_len - returning the list
 * @h: beginning of the list
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
