#include "main.h"

/**
 * times_table - a function that prints the 9 time table
*/

void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			p = i * j;
			if (p <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(p / 10 + '0');
			}
			_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}
}
