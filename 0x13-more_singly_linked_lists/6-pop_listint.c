#include "lists.h"
/**
 * pop_listint - deleting the head node
 * @head: the double pointer to the head node
 * Return: return n or 0 otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head || (*head) == NULL)
		return (0);

	temp = (*head);
	n = temp->n;
	(*head) = ((*head)->next);
	free(temp);
	return (n);
}
