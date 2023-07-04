#include "lists.h"
/**
 * print_listint - prints all the element of a listint_t
 * @h: pointer to the linked list
 *
 * Return: number of elements in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *start;

	start = h;
	while (start != NULL)
	{
		printf("%i\n", start->n);
		i++;
		start = start->next;
	}
	return (i);
}
