#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: pointer pointing at a pointer
 * @str: str
 * Return: list's size
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *fnode = malloc(sizeof(list_t));

	if (head == NULL || fnode == NULL)
		return (NULL);
	if (str != NULL)
	{
		fnode->str = strdup(str);
		if (fnode->str == NULL)
		{
			free(fnode);
			return (NULL);
		}
		fnode->len = _lencal(fnode->str);
	}
	fnode->next = *head;
	*head = fnode;
	return (fnode);
}
