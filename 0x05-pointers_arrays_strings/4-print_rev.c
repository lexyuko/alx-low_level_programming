#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: the string value
 * Return: return void
 */

void print_rev(char *s)
{
	int rev = 0;

	while (1)
	{
		if (s[rev] != '\0')
		{
			rev++;
		} else
		{
			break;
		}
		for (rev--; rev >= 0; rev--)
		{
			_putchar(s[rev]);
		}
		_putchar('\n');
	}

}
