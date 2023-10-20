#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a node in a list_t list
 * @head: head of the linked list.
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

