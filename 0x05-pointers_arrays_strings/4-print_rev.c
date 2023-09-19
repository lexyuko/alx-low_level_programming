#include "main.h"

/**
 * print_revs - prints the string in reverse
 * @s: the string value
 * Return: return void
 */

void print_revs(char *s)
{
	int rev = 0;

	while (rev >= 0)
	{
		if (s[rev] != '\0')
		{
			rev++;
		} else
		{
			break;
		}
		for (rev = 0; rev >= 0; rev--)
		{
			_putchar(s[rev]);
		}
		_putchar('\n');
	}

}
