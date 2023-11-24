#include "main.h"

/**
 * flip_bits - it returns the number of bits you would
 * need to flip to get from one number to another
 * @n: 1st num
 * @m: 2nd num
 * Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c;
	unsigned long int xorv;

	c = 0;
	xorv = n ^ m;

	while (xorv != 0)
	{
		if (xorv & 1ul)
		{
			c++;
		}
		xorv = xorv >> 1;
	}
	return (c);
}
