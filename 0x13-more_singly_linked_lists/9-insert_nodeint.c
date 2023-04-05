#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at an index
 * @head: dounle pointer to the head
 * @idx: the index
 * @n: data to be inserted
 * Return: addtress to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int m = 0;

	temp = (*head);

	if (!temp)
	{
		return (0);
	}

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (0);
	}

	while (temp && m < idx)
	{
		if (m == idx - 1)
		{
			new->next = temp->next;
			new->n = n;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
		m++;
	}
	return (0);
}