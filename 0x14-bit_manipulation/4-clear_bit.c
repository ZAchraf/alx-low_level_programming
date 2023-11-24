#include "main.h"

/**
 * clear_bit - a function that sets the value
 * of a bit to 0 at a given index
 * @n: the number toindex
 * @index: the bit we clear
 * Return: error(-1), success(1)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(n))
	{
		return (-1);
	}
	if (*n & 1L << index)
	{
		*n ^= !l << index;
	}
	return (1);
}
