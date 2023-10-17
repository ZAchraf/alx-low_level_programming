#include "main.h"

/**
 * rev_string - it reverses a string
 * @s: function input
*/

void rev_string(char *s)
{
	int i, l;

	char c;

	for = (l = 0; s[i] != '\0'; i++)
	{
		;
	}
	for (i = 0; i < l / 2; i++)
	{
		c = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = c;
	}
}
