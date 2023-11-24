#include "main.h"

/**
 * get_bit - returns the value of
 * a bit at a given index
 * @n: the number toindex
 * @index: the bit we want
 * Return: int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index >= 8 * sizeof(n))
	{
		return (-1);
	}
	b = (n >> index & 1);
	return (b);
}
