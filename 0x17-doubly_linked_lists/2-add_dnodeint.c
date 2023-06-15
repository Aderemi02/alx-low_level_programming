#include "lists.h"
/**
 * add_dnodeint - adding new node at the beginning
 * @head: pointer to the head of the list
 * @n: data to add to the new node
 * Return: the pointer to the head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = (*head);
	temp->prev = NULL;
	(*head) = temp;
	
	return (*head);
}
