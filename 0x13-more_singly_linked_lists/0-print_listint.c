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
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
