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

		int m;

		n = n * (-1);
		m = n % 10;
		LD = '0' + m;
		_putchar(LD);
		return (m);
	}
	else
	{
		char LD;

		int m;

		m = n % 10;
		LD = '0' + m;
		_putchar(LD);
		return (m);
	}
}
