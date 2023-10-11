#include "main.h"

/**
 * print_sign - is a function that prints the sign
 *
 *@n: function imput
 *
 * Return: 1 if the condition is true, else 0 else -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
