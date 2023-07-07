#include "hash_tables.h"

/*
 *hash_table_get - the function can retrievis the value of a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Returns: the value associated with the element, or NULL if key can't found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *in_array;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	in_array = ht->array[index];
	if (in_array == NULL)
		return (NULL);

	while (in_array)
	{
		if (strcmp(in_array->key, key) == 0)
			return (in_array->value);
		in_array = in_array->next;
		}
	return (NULL);
}
