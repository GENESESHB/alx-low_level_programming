#include "hash_tables.h"

/*
 * hash_tables_get_index - retrieves the index for given key
 * @key:the key to retrieves the index for
 * @size:the size of hash tables  array
 *
 * Return: the index for given key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2(key) % size;
	return (key_index);
}
