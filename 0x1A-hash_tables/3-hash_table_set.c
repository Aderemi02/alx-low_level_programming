#include "hash_tables.h"
/**
 * hash_table_set - adding a new hash to the hash table
 * @ht: the hash table
 * @key: key in the hash table
 * @value: value assigned to each key
 * Return: 0 on failure, 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int new_index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	new_index = key_index((unsigned char *)key, ht->size);

	if (adding_new_hash(&(ht->array[new_index]), key, value) == NULL)
		return (0);
	else
		return (1);
}

/**
 * adding_new_hash - adding new node to the beginning of the hash
 * @head: this is the beginning of the hash
 * @key: the key of the hash
 * @value: the value assigned to each key
 * Return: the begininning of the hash
 */
hash_node_t *adding_new_hash(hash_node_t **head, const char *key,
		const char *value)
{
	hash_node_t *temp;

	temp = *head;

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}
		temp = temp->next;
	}

	temp = malloc(sizeof(hash_node_t));

	if (temp == NULL)
		return (0);


	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *head;
	*head = temp;
	return (*head);
}
