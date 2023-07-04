#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: pointer to be add to the head of the list
 * @n: int to be added to the list
 * Return: a pointer to the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
