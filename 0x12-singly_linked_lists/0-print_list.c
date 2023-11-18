#include "lists.h"

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
 * print_list - a function that prints all the elements of a list
 * @h: the first node of the list
 * Return: c the number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", _lencal(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		number++;
	}
	return (number);
}
