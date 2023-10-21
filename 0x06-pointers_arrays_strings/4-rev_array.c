#include "main.h"

/**
 * reverse_array - it reverses the content of an arrayof integers
 * @a: an array of integers
 * @n: the number of elements to reverse
*/

void reverse_array(int *a, int n)
{
	int i, j, z;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		z = a[i];
		a[i] = a[j];
		a[j] = z;
	}
}
