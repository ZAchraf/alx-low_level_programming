#include "main.h"

/**
 * _lencal - calculates the length of strings
 * @str: a string
 * Return: lencal of string
*/

int _lencal(char *str)
{
	int i;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	;
	}
	return (i);
}

/**
 * create_file - a function that creates a file
 * @filename: file name to be created
 * @text_content: a text probably from the argv
 * Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t length, b;
	int file_d;

	length = _lencal(text_content);
	b = 0;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_d == -1)
	{
		return (-1);
	}
	if (length != 0)
	{
		b = write(file_d, text_content, length);
	}
	clode(file_d);

	return (b == length ? 1 : -1);
}
