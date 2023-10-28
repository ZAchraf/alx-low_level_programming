#include "main.h"

/**
 * _puts - it prints a string, followed by a new line, to stdout
 * @str: function input
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
