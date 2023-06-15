#include "lists.h"
/**
 * add_dnodeint_end - adding node to the end
 * @n: data to be added to the list
 * @head: the head of the list
 * Return: the address to the new element added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	temp = (*head);

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	newnode = temp;

	return (newnode);
}
