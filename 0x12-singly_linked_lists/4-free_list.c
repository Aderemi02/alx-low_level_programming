#include "lists.h"
/**
 * free_list - freeing the allocated memory of the singly list
 * @head: memory to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
