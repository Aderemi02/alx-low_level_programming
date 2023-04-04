#include "lists.h"
/**
 * add_nodeint - adding node to the beginning of a list
 * @head: pointer to the pointer of head
 * @n: data to be inside the new node
 * Return: the address to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (0);
	}
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
