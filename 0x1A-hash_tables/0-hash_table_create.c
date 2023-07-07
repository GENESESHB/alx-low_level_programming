#include "hash_tables.h"
/**
 *hash_table_create -  a function that creates a hash table.
 *@size: the size of array of pointers.
 *Return: a pointer to the newly created hash table
 *otherwise NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t) * 1);
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
