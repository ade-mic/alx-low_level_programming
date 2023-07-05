#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head node
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int value;
	value = (*head)->n;
	*head = (*head)->next;
	return (value);
}
