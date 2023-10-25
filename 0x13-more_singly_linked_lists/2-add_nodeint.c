#include "lists.h"

/**
 * *add_nodeint - add new node at  beggining or start
 * @head: head of node
 * @n: int n of elements
 *
 * Return: new node at the start
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
