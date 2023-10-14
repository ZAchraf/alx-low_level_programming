#include "main.h"

/**
 * print_line - it print n line
 * @n: funcion input
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
