#include "main.h"
/**
 * _strlen - finds the lenght of a string
 * @s: a string datatype
 * Return: returns lenght of s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len))

		len++;

	return (len);

}
