#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memmory using malloc
 * @b: number of bytes allocated
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b);
{
	void *pnt;

	pnt = malloc(b);

	if (pnt == NULL)
		exit(98);

	return (pnt);
}
