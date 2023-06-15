#include "lists.h"
/**
 * get_dnodeint_at_index - getting a node at index
 * @head: beginning of the list
 * @index: point to get the the node
 * Return: the node at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n = 0;

	temp = head;

	if (head == NULL)
		return (NULL);

	while (temp->prev != NULL)
		temp = temp->prev;

	while (temp != NULL)
	{
		if (n == index)
			break;
		temp = temp->next;
		n++;
	}
	return (temp);
}
