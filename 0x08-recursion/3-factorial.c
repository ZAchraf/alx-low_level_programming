#include "main.h"

/**
 * factorial - it  returns the factorial of a given number
 * @n: a given number
 * Return: f
*/

int factorial(int n)
{
	int f;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		f = n * factorial(n - 1);
	}
	return (f);
}
