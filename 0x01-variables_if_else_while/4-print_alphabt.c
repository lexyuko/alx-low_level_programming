#include <stdio.h>
#include <stdlib.h>

/**
 * main - "excluded q and e"
 * Return: Always return 0.
 */

int main(void)
{
	char i;

	while (i <= 'z')

	{

	if
		((i != 'e') && (i != 'q'))

		{
			putchar(i);
			putchar('\n');
		}
	}
	return (0);
}
