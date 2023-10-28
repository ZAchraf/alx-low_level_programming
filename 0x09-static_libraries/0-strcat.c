#include "main.h"

/**
 * _strcat - it's a function that concatenates two strings
 * @dest: a pointer to destination input
 * @src: a pointer to src input
 * Return: @dest a pointer to the result string
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b]; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
