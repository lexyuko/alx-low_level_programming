#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given index.
 * @head: head of a list.
 * @idx: position of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new  or index node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *y;

	y = *head;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && y != NULL; x++)
		{
			y = y->next;
		}
	}

	if (y == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = y->next;
		y->next = new;
	}

	return (new);
}
