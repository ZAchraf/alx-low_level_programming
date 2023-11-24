#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 * @b: a binary number in a string
 * Return: decimal number of b
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		decimal = decimal * 2 + (*b - '0');
		*b++;
	}
	return (decimal);
}

