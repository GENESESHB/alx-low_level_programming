#include "hash_tables.h"


/*
 *key_index - a function that gives you the index of a key.
 *@key:the key to retrieves the index for
 *@size:the size of hash tables  array
 *
 * Return: the index for given key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2(key) % size;
	return (key_index);
}
