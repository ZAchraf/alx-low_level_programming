#include "main.h"

/**
 * *_strspn -  a function that locates a character in a string
 * @s: str
 * @accept: bytes
 * Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ir, jr;

	for (ir = 0; s[ir] != '\0'; ir++)
	{
		for (jr = 0; accept[jr] != s[ir]; jr++)
		{
			if (accept[jr] == '\0')
			{
				return (ir);
			}
		}
	}
	return (ir);
}
