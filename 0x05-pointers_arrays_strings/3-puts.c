#include "main.h"
/**
 *_puts - prints the str
 *@str: the string
 *Return: returns void
 */


void _puts(char *str)
{
	int num = 0;

	while (num >= 0)
	{
	if (str[num] != '\0')
	{
		_putchar(str[num]);
		num++;
	} else
	{
		num = -1;
	_putchar('\n');
	}
	}
}
