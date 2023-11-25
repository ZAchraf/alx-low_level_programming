#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned long int e;

	e = 1;

	return (*(char *)&e);
}
