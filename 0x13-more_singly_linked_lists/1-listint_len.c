#include "lists.h"
/**
 * listint_len - returns numbers of the element of a listint_t
 * @h: pointer to the linked list
 *
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *start;

	start = h;
	if (start == NULL)
		return (0);
	while (start != NULL)
	{
		i++;
		start = start->next;
	}
	return (i);
}
