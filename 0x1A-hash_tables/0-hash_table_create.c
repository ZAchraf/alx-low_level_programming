#include "hash_tables.h"

/**
 * hash_table_create - a fun that create a hash table.
 * @size: array size.
 *
 * Return:  NULL, if there is an error.
 *         or a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hata;
	unsigned long int n;

	hata = malloc(sizeof(hash_table_t));
	if (hata == NULL)
		return (NULL);

	hata->size = size;
	hata->array = malloc(sizeof(hash_node_t *) * size);
	if (hata->array == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		hata->array[n] = NULL;

	return (hata);
}
