#include "variadic_functions.h"

/**
 * sum_them_all - a function that adds up numbers
 * @n: the variable or number of args
 * Return: the sum or 0
*/

int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum = 0;
	va_list nb;

	if (n == 0)
	{
		return (0);
	}
	va_start(nb, n);
	while (i--)
	{
		sum = sum + va_arg(nb, int);
	}
	va_end(nb);
	return (sum);
}
