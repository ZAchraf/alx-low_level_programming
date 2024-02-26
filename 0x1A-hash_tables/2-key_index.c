#include "hash_tables.h"

/**
 * key_index - Get the index to be stored in array of a hash table.
 * @key:  key index.
 * @size: hash table array size.
 * Return: key index
 * Description: djb2 algo.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
