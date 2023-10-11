#include "main.h"

/**
 * print_last_digit - is a function that prints the last digit
 *
 *@n: function imput
 * Return: it return the value of n
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = _abs(n);
		n = n % 10;
		return (n);
	}
	else
	{
		n = n % 10;
		return (n);
	}
}

