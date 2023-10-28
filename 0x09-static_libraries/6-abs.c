#include "main.h"

/**
 * _abs - is a function that computes the absolute value
 *
 * @n: function input
 *
 * Return: the value of n
*/

int _abs(int n)
{
	if (n > 0)
	{
	return (n);
	}
	else if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	{
		return (0);
	}
}
