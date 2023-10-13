#include "main.h"

/**
 * more_numbers - prints another set of numbers  x10
*/

void more_numbers(void)
{
	int c, i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			c = j;
			if (j > 9)
			{
				putchar(49);
				c = j % 10;
			}
			putchar(c + '0');
		}
		putchar('\n');
	}
}
