#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index or position
 * of a linked list.
 * @head: head of a list.
 * @index: index or position of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *num;
	listint_t *next;

	num = *head;

	if (index != 0)
	{
		for (node = 0; node < index - 1 && num != NULL; node++)
		{
			num = num->next;
		}
	}

	if (num == NULL || (num->next == NULL && index != 0))
	{
		return (-1);
	}

	next = num->next;

	if (index != 0)
	{
		num->next = next->next;
		free(next);
	}
	else
	{
		free(num);
		*head = next;
	}

	return (1);
}
