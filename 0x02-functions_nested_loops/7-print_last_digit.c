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
		char LD;

		n = n * (-1);
		n = n % 10;
		LD = '0' + n;
		_putchar(LD);
		return (LD);
	}
	else
	{
		char LD;

		n = n % 10;
		LD = '0' + n;
		_putchar(LD);
		return (LD);
	}
}

