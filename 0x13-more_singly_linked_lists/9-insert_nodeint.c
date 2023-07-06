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

	if (*head || head)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		if (*head && idx == 0)
		{
			new->next = *head;
			*head = new;
		}
		else
		{
			current = *head;
			while (current != NULL && i < idx - 1)
			{
				current = current->next;
				i++;
			}
			if (current == NULL)
			{
				free(new);
				return (NULL);
			}
			new->next = current->next;
			current->next = new;
		}
		return (new);
	}
	return (NULL);
}
