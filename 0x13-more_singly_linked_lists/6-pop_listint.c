#include "lists.h"

/**
 * pop_listint - deletes the head or start node of
 * a linked list listint
 * @head: head of a list.
 *
 * Return: starting node's data.
 */
int pop_listint(listint_t **head)
{
	int snode;
	listint_t *s;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	snode = curr->n;

	s = curr->next;

	free(curr);

	*head = s;

	return (snode);
}
