#include "main.h"

/**
 * print_alphabet - is a function that uses another
 *		function to print from a to z
*/

void print_alphabet(void)
{
	int a;

	for (a = 'a' ; a < '{'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
