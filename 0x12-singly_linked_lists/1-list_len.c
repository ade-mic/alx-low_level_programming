#include "lists.h"
/**
 * list_len - return the number of elements in a linked ist
 * @h: linked list to be printed
 *
 * Return: numbers of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h)
	{
		while (h != NULL)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
