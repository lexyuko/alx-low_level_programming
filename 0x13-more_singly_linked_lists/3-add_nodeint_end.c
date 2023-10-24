#include "lists.h"

/**
 * *add_nodeint_end - add node at end or last position of list
 * @head: head of nodes
 * @n: int n to elements
 *
 * Return: elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *end;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	end = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new_node;
	}
	return (*head);
}
