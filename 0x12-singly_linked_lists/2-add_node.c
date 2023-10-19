#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning
 * of a list_t linked list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t x;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (x = 0; str[x]; x++)
		;

	new->len = x;
	new->next = *head;
	*head = new;

	return (*head);
}

