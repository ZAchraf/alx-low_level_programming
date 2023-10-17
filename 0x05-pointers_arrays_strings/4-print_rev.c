#include "main.h"

/**
 * print_rev - it prints the string in reverse
 * @s: function input
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

