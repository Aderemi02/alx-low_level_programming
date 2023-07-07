#include "hash_tables.h"
/**
 * hash_table_get - gets a value from a key in a hash table
 * @ht: the hash table from which value is to be retrieved
 * @key: the key to which the value is assigned
 * Return: value on success, Null otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int new_index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	new_index = key_index((const unsigned char *)key, ht->size);

	if (new_index >= ht->size)
		return (NULL);
	temp = ht->array[new_index];

	while (temp && strcmp(temp->key, key) != 0)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	return (temp->value);
}
