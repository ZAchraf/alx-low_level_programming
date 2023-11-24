#include "main.h"

/**
 * print_binary - a function that prints the binary 
 * representation of a number.
 * @n: the number to print
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	int P = 0;
	int b;

	b = sizeof(n) * 8;

	while (b != 0)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			P++;
		}
		else if (P != 0)
		{
			_putchar('0');
		}
	}
	if (P == 0)
	{
		_putchar('0');
	}
}
