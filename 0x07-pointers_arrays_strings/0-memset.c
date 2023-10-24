#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: pointer
 * @b: const
 * @n: max bytes
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; n > 0; r++, n--)
	{
		s[r] = b;
	}
	return (s);
}
