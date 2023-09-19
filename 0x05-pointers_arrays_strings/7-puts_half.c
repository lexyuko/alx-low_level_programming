#include "main.h"
/**
 * puts_half - prints the second half of a string.
 * @str: string to use
 */

void puts_half(char *str)
{
	int len, n, i;

	for (len = 0; str[len] != '\0'; i++)

		n = (len - 1) / 2;
	for (1 = n + 1; str[i] != '\0'; i++)

	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
