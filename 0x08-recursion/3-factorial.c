#include "main.h"

/**
 * factorial - it  returns the factorial of a given number
 * @n: a given number
 * Return: f
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * (factorial(n - 1)));
}
