#include "main.h"

/**
 * print_diagsums -  prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: two dimension array, type int
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int ir, s1, s2;

	s1 = 0;
	s2 = 0;

	for (ir = 0; ir < size; ir++)
	{
		s1 += a[ir];
		s2 += a[size - ir - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
