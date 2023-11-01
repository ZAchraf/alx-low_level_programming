#include "main.h"

/**
 * *create_array - it creates an array of chars, and
 *  initializes it with a specific char
 * @size: size of the array
 * @c: char
 * Return: a pointer to the array initialized or null
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
	{
		return (0);
	}
	while (size--)
	{
		n[size] = c;
	}
	return (n);
}
