#include "main.h"

/**
 * more_numbers - prints another set of numbers  x10
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
		}
		putchar('\n');
	}
}
