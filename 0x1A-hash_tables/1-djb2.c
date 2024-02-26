#include "hash_tables.h"

/**
 * hash_djb2 - a djb2 algorithm to be implemented.
 * @str: The str to hash.
 *
 * Return: hash that we calculated.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int d;

	h = 5381;
	while ((d = *str++))
		h = ((h << 5) + h) + d; /* h * 33 + d */

	return (h);
}
