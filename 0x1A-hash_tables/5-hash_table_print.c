#include "hash_tables.h"
/**
 * hash_table_print - printing hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int new;
	char *to_print = "";

	if (ht == NULL)
		return;

	printf("{");
	for (new = 0; new < ht->size; new++)
	{
		temp = (ht->array[new]);
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", to_print, temp->key, temp->value);
			to_print = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
