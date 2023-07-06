#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head node
 * @idx: index to insert node
 * @n: value of node to be added
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *current;

	if (*head)
	{
		current = *head;
		while (current != NULL)
		{
			i++;
			if (i == idx)
			{
				new = malloc(sizeof(listint_t));
				if (!new)
					return (NULL);
				new->n = n;
				if (new->n == n)
				{
					new->next = current->next;
					current->next = new;
				}
				else
					return (NULL);
			}
			else
				current = current->next;

		}
		return (new);
	}
	return (NULL);
}
