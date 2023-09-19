#include "main.h"
/**
 * _strlen - finds the lenght of a string
 * @s: a string datatype
 * Return: returns lenght of s
 */

int _strlen(char *s)
{
	int len;
	
	for (len = 0; *s[len] != '\0')
	{
		return len;
	}
}
