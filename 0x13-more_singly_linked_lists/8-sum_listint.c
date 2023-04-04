#include "lists.h"
/**
 * sum_listint - sum all the data in the list
 * @head: the pointer to the head node
 * Return: the sum of all the data or 0 otherwise
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	if (!temp)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
