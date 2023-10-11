#include "main.h"

/**
 * print_last_digit - is a function that prints the last digit
 *
 *@n: function imput
 * Return: it return the value of n
*/

int print_last_digit(int n)
{
	int LD;

	if (n < 0)
	{
		LD = -1 * (n % 10);
		_putchar(LD + '0');
		return (LD);
	}
	else
	{
		LD = -1 * (n % 10);
		_putchar(LD + '0');
		return (LD);
	}
}
