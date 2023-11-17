#include "list.h"

/**
 * print_list - a function that prints all the elements of a list
 * @h: the first node of the list
 * Return: c the number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
		printf("there is no linked list to point at");
		return (1);
	}
	int n_number = 0;

	list_t *printer = NULL;

	printer = h;
	while (printer != NULL)
	{
		printf("%s", printer->str);
		n_number++;
		pointer = pointer->next;
	}
	return (n_number);
}

