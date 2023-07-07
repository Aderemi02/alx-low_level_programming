#include "hash_tables.h"
/**
 * key_index - provides the index of a key
 * @key: the key of the hash table the index is to provide
 * @size: size of the array of the hash table
 * Return: index of thre key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	else
		return (hash_djb2(key) % size);
}
