#include "lists.h"
/**
 * get_nodeint_at_index - getting the node at an index
 * @head: pointer to the head of the list
 * @index: the index to be returned
 * Return: the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n = 0;

	temp = head;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}

	if (temp != NULL)
	{
		return (temp);
	}

	return (0);
}
