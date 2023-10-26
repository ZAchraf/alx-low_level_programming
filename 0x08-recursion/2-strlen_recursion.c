#include "main.h"

/**
 *  _strlen_recursion-  returns the length of a string
 * @s: is a pointer to a string
 * Return: num
*/

int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s > '\0')
	{
		num =  num + 1 + _strlen_recursion(s + 1);
	}
	return (num);
}
