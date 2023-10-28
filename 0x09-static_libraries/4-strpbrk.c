#include "main.h"

/**
 * _strpbrk - it searches a string for any of a set of bytes
 * @s: str
 * @accept: str to match
 * Return: pointer to the byte in s
 * or Null if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int ir, jr;

	char *p;

	ir = 0;
	while (s[ir] != '\0')
	{
		jr = 0;
		while (accept[jr] != '\0')
		{
			if (accept[jr] == s[ir])
			{
				p = &s[ir];
				return (p);
			}
			jr++;
		}
		ir++;
	}
	return (0);
}
