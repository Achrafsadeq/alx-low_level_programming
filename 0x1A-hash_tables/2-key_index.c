#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array
 * @key: The key (string) to hash
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	/* Get the hash value using hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Calculate the index by taking the modulo with size */
	return (hash_value % size);
}
