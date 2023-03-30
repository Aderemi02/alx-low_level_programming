#include "lists.h"
/**
 * add_node_end - adds node to the link list at the end
 * @head: pointer to pointer of the head list
 * @str: the string in the list
 * Return: pointer to the head of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	int len = 0;
	list_t *temp2 = *head;

	while (str[len])
		len++;


	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (temp2->next)
		temp2 = temp2->next;

	temp2->next = temp;

	return (temp);
}
