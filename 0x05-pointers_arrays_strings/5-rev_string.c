#include "main.h"

/**
 * rev_string - it reverses a string
 * @s: function input
*/

void rev_string(char *s)
{
	int i, l;

	char c;

	for (l = 0; s[l] != '\0'; ++l)
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
