#include "main.h"

/**
 * _islower - is a function that checks if a char is written in lowercase
 *
 *@c: function imput
 *
 * Return: 1 if the condition is true else 0
*/

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	} else
		return (0);
}
