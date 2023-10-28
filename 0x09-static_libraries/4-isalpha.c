#include "main.h"

/**
 * _isalpha - is a function that checks if a char is an alphabetic character
 *
 *@c: function imput
 *
 * Return: 1 if the condition is true else 0
*/

int _isalpha(int c)
{
	if (c > 64 && c < 123)
		return (1);
	else
		return (0);
}
