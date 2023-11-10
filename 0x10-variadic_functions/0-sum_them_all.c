#include "variadic_functions.h"

/**
 * sum_them_all - a function that adds up numbers
 * @n: the variable or number of args
 * Return: the sum or 0 if  n==0
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list nb;
	int i, sum = 0;

	va_start(nb, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(nb, int);
	}
	va_end(nb);
	return (sum);
}
