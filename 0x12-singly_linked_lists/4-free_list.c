#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: points to the first node
 * Return: nothing
*/

void free_list(list_t *head)
{
	list_t *fnode;
	list_t *nnode;

	if (head == NULL)
	{
		return;
	}
	fnode = head;
	while (fnode != NULL)
	{
		nnode = fnode->next;
		free(fnode->str);
		free(fnode);
		fnode = nnode;
	}
}
