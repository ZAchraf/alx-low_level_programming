#include "hash_tables.h"

/**
 * hash_table_get - retrieving value(key)
 * @ht: pointer to hash table.
 * @key: value from this key.
 *
 * Return: no matching - NULL.
 *         or - the value associated with key in hasht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ind = key_ind((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);

	node = ht->array[ind];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
