#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: head node
 * @index: index of node to be deleted
 * Return: head node data
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous_node;
	unsigned int i = 0;

	if (head != NULL || *head != NULL)
	{
		if (index == 0 && *head)
		{
			current = *head;
			*head = (*head)->next;
			free(current);
			return (1);
		}
		current = *head;
		while (current != NULL && i < index)
		{
			previous_node = current;
			current = current->next;
			i++;
		}
		if (current == NULL)
			return (-1);
		previous_node->next = current->next;
		free(current);
		return (1);
	}
	return (-1);
}
