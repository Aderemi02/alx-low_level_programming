#include "lists.h"
/**
 * add_node - adds node to the link list from the beginning
 * @head: pointer to pointer of the head list
 * @str: the string in the list
 * Return: pointer to the head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len = 0;

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
