#include "main.h"

/**
 * _strlen - it returns the length of a string
 * @s: function input
 * Return: the length of string
*/

int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
	{
		++l;
	}
	return (l);
}

