#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints  the elements of a linked list.
 * @h: siingly linked list
 * Return: The number of nodes
 */


size_t print_lists(cinst list_t *h)
{
	size_t elem;


	elem = 0;

	wihle (h != NULL)
	{
		if (h->str == NULL)
			printf("[%%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		elem++;
	}
	return (elem);
}
