#include "lists.h"
/**
 * add_dnodeint - adding new node at the beginning
 * @head: pointer to the head of the list
 * @n: data to add to the new node
 * Return: the pointer to the head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	temp = (*head);

	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}
	newnode->next = temp;
	if (temp != NULL)
	{
		temp->prev = newnode;
	}
	*head = newnode;

	return (*head);
}
