#include "main.h"

/**
 * puts_half - it prints half of the string
 * @str: function input
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	i++;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
