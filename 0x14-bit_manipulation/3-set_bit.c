#include "main.h"

/**
 * set_bit - assigns a value of 1 to a bit at the specified index
 * at a given index.
 *  @n: pointer of an unsigned long int
 *  @index: index of the bit.
 *
 *   Return: 1 if it worked, -1 if it didn't.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);

}

