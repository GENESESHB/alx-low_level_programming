#include "hash_tables.h"
/**
 *hash_table_set - the function that adds an element to the hash table.
 *@ht: a pointer to the hash table.
 *@key: the key of the element.
 *@value:  the value of the element.
 *Return: 1 if it succeeded or 0 if failed.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newselement = NULL;
	hash_node_t *in_array;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	in_array = ht->array[index];

	while (in_array)
	{
		if (strcmp(in_array->key, key) == 0)
		{
			free(in_array->value);
			in_array->value = strdup(value);
			if (!in_array->value)
				return (0);
			return (1);
		}
		in_array = in_array->next;
	}
		newselement = malloc(sizeof(hash_node_t *));
		if (!newselement)
			return (0);

		newselement->key = strdup(key);
		newselement->value = strdup(value);
		if (!newselement->value)
			return (0);
		newselement->next = ht->array[index];
		ht->array[index] = newselement;
		return (1);
}
