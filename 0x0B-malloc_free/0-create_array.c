#include "main.h"

/**
 * create_array - array to created
 * @c: char to initialize the array
 * @size: the size of the initialized array
 * Return: if size = 0 - returns null
 * else returns a pointer to an array
 **/

char *create_array(unsigned int size, char c);
{
	unsigned int x;
	char *array;

	if (size == 0)
	{
		return (NULL);

	};
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	};

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}
