#include "main.h"

/**
 * *string_toupper -  it changes all lowercase letters of a string to uppercase
 * @str: str to returrn
 * Return: str
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
