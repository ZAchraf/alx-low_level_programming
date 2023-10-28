#include "main.h"

/**
 * _isupper - checks if char is an uppercase
 * @c: function imput
 * Return: 1 if true, 0 if false
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
