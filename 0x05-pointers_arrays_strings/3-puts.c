#include "main.h"
/**
 *_puts - prints the str
 *@str: the string
 *Return: returns void
 */


void _puts(char *str)
{
	if (str != '\0')
		_putchar(str);
	_putchar('\n');
}
