#include "lists.h"

/**
 * find_listint_loop - finds the loop in a listint linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *idx;
	listint_t *prev;

	idx = head;
	prev = head;
	while (head && idx && idx->next)
	{
		head = head->next;
		idx = idx->next->next;

		if (head == idx)
		{
			head = prev;
			prev =  idx;
			while (1)
			{
				idx = prev;
				while (idx->next != head && idx->next != prev)
				{
					idx = idx->next;
				}
				if (idx->next == head)
					break;

				head = head->next;
			}
			return (idx->next);
		}
	}

	return (NULL);
}
