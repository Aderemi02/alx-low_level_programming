#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head list to be reversed
 * Return: pointer to the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bef = NULL, *aft = NULL;

	do {
		aft = (*head)->next;
		(*head)->next = bef;
		bef = *head;
		*head = aft;
	} while (*head);

	*head = bef;

	return (*head);
}
