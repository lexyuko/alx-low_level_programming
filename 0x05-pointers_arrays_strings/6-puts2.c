#include "main.h"

/**
 *puts2 - prints every other character of a string,
 *starting with the first character,
 *followed by a new line.
 *@str: input string.
 *Return: void.
 */
void puts2(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] != '\0')
		{
			if (c % 2 == 0)
			{
				_putchar(str[c]);
																								}
			c++;
		} else
																							{
																								c = -1;
			_putchar('\n');
																							}
																						}
}
