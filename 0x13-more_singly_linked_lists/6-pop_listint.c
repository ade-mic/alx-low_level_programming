#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head node
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int value;

	if (*head || head)
	{
		current = *head;
		value = current->n;
		*head = (*head)->next;
		free(current);
		return (value);
	}
	else
		return (0);
}
