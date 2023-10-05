#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: pointer to a string of pointers to strings
 *
 * Return: address of the newly allocated memory
 */

char *argstostr(int ac, char **av)
{
	int x, y, z;
	int sumlen = 0;
	char *arg_concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			sumlen++;
		sumlen++;
	}
	sumlen++;

	arg_concat = malloc(sumlen * sizeof(char));
	if (arg_concat == NULL)
	{
		free(arg_concat);
		return (NULL);
	}

	z = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, z++)
		{
			arg_concat[z] = av[x][y];
		}
		arg_concat[z] = '\n';
		z++;
	}
	return (arg_concat);
}
