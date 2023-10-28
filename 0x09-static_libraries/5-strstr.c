#include "main.h"

/**
 * *_strstr -  function that locates a substring
 * @haystack: str
 * @needle: pointer
 * Return: pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int ie, je;

	for (ie = 0; haystack[ie] > '\0'; ie++)
	{
		for (je = ie; haystack[je] > '\0' && needle[je - ie] > '\0'; je++)
		{
			if (haystack[je] != needle[je - ie])
			{
				break;
			}
		}
		if (needle[je - ie] == '\0')
		{
			return (haystack + ie);
		}
	}
	return (0);
}
