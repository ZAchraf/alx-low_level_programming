/**
 * list_len -  returns the number of elements in a linked list_t lis
 * @h: the first node of the list
 * Return: number of node in the list
*/

size_t print_list(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
