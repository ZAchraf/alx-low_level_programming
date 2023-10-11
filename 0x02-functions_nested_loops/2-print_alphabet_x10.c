#include "main.h"

/**
 * print_alphabet_x10 - is a function that uses another
 *              function to print from a to z,10 times
*/

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int a;

		for (a = 'a' ; a < '{'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
