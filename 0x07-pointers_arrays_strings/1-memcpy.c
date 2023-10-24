#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copid
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
