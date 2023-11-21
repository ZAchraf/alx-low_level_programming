#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the size to be allocated
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *AM;

	AM = malloc(b);
	if (AM == NULL)
	{
		exit(98);
	}
	return (AM);
}
