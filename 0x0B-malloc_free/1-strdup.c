#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: string of chars
 *
 * Return: address of the newly allocated memory
 */

char *_strdup(char *str)
{
	unsigned int len;
	unsigned int x, y;
	char *str_copy;
	char *tmp = str;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (*str++)
		x++;
	len = x;
	str = tmp;

	str_copy = malloc(len * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);

	y = 0;
	while (y < len)
	{
		str_copy[y] = str[y];
		y++;
	}
	str_copy[y] = '\0';
	return (str_copy);
}
