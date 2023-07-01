#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list to be printed
 *
 * Return: numbers of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h)
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nill)\n");
				h = h->next;
			}

			printf("[%i] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
