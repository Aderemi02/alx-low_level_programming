#include "lists.h"
/**
 * insert_dnodeint_at_index - inserting a node at an index
 * @h: beginning of the list
 * @idx: the index
 * @n: data to be inserted
 * Return: the new node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newnode;
	unsigned int num;

	newnode = NULL;
	if (idx == 0)
		newnode = add_dnodeint(h, n);

	else
	{
		temp = *h;
		num = 1;
		if (temp != NULL)
			while (temp->prev != NULL)
				temp = temp->prev;
		while (temp != NULL)
		{
			if (num == idx)
			{
				if (temp->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->next = temp->next;
						newnode->prev = temp;
						temp->next->prev = newnode;
						temp->next = newnode;
					}
				}
				break;
			}
			temp = temp->next;
			num++;
		}
	}
	return (newnode);
}
