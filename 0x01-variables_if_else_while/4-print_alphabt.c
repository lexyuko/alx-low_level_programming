#include <stdio.h>
#include <stdlib.h>

/**
 * main - "exclude q and e"
 * Return: Always return 0.
 */

int main(void)
{
	char i;

	while (i <= 'z')
	{

		if
			(i != 'e' && i != 'q') {

				putchar(i);
				putchar('\n');
			}
		i++;
	}
	return (0);
}
