#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pnt1;
	char *old_pnt;
	unsigned int i;

	if (new_size == old_size)
		return (pnt);

	if (new_size == 0 && pnt)
	{
		free(pnt);
		return (NULL);
	}

	if (!pnt)
		return (malloc(new_size));

	pnt1 = malloc(new_size);
	if (!pnt1)
		return (NULL);

	old_pnt = pnt;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pnt1[i] = old_pnt[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pnt1[i] = old_pnt[i];
	}

	free(pnt);
	return (pnt1);
}

