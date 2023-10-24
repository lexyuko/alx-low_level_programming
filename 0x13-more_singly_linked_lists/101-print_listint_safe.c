#include "lists.h"

/**
 * free_listint - frees a listint linked list
 * @head: head of a listint linked list.
 *
 * Return: no return.
 */
void free_listint(listint_t **head)
{
	listint_t *list;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((list = curr) != NULL)
		{
			curr = curr->next;
			free(list);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listint_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			exit(98);

		new->n = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->n)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listint(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hptr);
	return (nnodes);
}
