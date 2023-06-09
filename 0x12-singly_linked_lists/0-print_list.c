#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list to be printed
 *
 * Return: numbers of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h)
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[%d] %s\n", 0, "(nil)");
			} else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
			i++;
		}
	}
	return (i);
}
