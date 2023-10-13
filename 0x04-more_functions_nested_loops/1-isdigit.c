#include "main.h"

/**
 * _isdigit - checks if c is an digital number
 * @c: function imput
 * Return: 1 if true, 0 if false
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
