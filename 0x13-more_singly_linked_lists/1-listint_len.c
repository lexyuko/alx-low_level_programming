#include "lists.h"
#include <stdio.h>

/**
 * print_listint - number of nodes as integers
 * @h: header to the program
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
