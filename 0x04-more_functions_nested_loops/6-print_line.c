#include "main.h"

/**
 * print_line - it print n line
 * @n: funcion input
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar(95);
	}
	_putchar('\n');
}
