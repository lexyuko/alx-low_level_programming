#include "main.h"
#include <stdio.h>

/**
 * print_arry - print an array.
 * @a: the arrary to print.
 * @n: array's length
 */

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		printf("%d", a[y]);
		if (y < n - 1)
		{
			printf(", ");
		}

	}
	printf("\n");
}
