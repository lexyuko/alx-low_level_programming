#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		array[hgt_index] = malloc(sizeof(int) * width);

		if (array[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(array[hgt_index]);

			free(array);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			array[hgt_index][wid_index] = 0;
	}

	return (array);
}

