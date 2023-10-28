#include "main.h"

/**
 * _strncat - it's a function that concatenates two strings
 * @dest: a pointer to destination input
 * @src: a pointer to src input
 * @n: most number of bytes from src
 * Return: @dest a pointer to the result string
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, i;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
}
