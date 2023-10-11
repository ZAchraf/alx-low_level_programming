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
		int LD;

		LD = -1 * (n % 10);
		_putchar(LD + '0');
		return (LD);
	}
	else
	{
		int LD;

		LD = -1 * (n % 10);
		_putchar(LD + '0');
		return (LD);
	}
}
