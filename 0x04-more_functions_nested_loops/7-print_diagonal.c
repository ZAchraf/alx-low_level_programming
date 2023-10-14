#include "main.h"

/**
 * print_diagonal - it draws a diagonal line
 * @n: function imput
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				putchar(' ');
			}
			putchar(92);
			putchar('\n');
		}
	}
	putchar('\n');
}
