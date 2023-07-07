#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int new;

	if (ht == NULL)
		return;

	for (new = 0; new < ht->size; new++)
	{
		if (ht->array[new] != NULL)
		{
			temp = ht->array[new];
			while (temp)
			{
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = temp->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
