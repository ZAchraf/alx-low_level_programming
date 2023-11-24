#include "main.h"

/**
 * set_bit - a function that sets the
 * value of a bit to 1 at a given index
 * @n: the number toindex
 * @index: the bit we set
 * Return: error(-1), success(1)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int r;

	if (index >= 8 * sizeof(n))
	{
		return (-1);
	}
	r  = (!!(*n |= 1L << index));
	return (r);
}
