#include "main.h"

/**
 * _strlen - returns the size of a given string
 * @s: str
 * Return: int
*/

int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{
	;
	}
	return (size);
}

/**
 * str_concat -  a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: 0
*/

char *str_concat(char *s1, char *s2)
{
	char *t;
	int i, size1, size2;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	t = malloc((size1 + size2 + 1) * sizeof(char));
	if (t == 0)
		return (0);
	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
			t[i] = s1[i];
		else
			t[i] = s2[i - size1];
	}
	t[i] = '\0';
	return (t);
}
