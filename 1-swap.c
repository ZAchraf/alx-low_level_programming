#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: function input
 * @b: function input
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
