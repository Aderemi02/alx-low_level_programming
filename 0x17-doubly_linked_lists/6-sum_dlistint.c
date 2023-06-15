#include "lists.h"
/**
 * sum_dlistint - adding all the data in the node
 * @head: the beginning of the list
 * Return: sum of the total list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;

		while (temp != NULL)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
