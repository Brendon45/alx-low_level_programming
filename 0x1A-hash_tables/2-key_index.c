#include "hash_tables.h"

/**
 * key_index - gives the index of a key in hash table
 * @key: key to be given
 * @size: size of the hash table array
 * Return:  the index at which the key/value pair
 * should be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int b, new_index;

	if (size <= 0)
		return (0);

	b = hash_djb2(key);
	new_index = b % size;

	return (new_index);
}
