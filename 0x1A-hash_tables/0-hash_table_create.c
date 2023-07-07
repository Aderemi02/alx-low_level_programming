#include "hash_tables.h"
/**
 * hash_table_create - creating a new hash table
 * @size: size of the hash table
 * Return: hash table, null otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create_table;
	hash_node_t **new_array;
	unsigned long int new;

	create_table = malloc(sizeof(hash_table_t));
	new_array = malloc(sizeof(hash_node_t *) * size);

	if (create_table == NULL)
		return (NULL);

	if (new_array == NULL)
		return (NULL);

	for (new = 0; new < size; new++)
		new_array[new] = NULL;

	create_table->size = size;
	create_table->array = new_array;
	return (create_table);
}
