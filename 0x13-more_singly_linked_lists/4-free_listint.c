#include "lists.h"
/**
 * free_listint - freeing the lists
 * @head: the content to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
