#include <stdio.h>
#include <stdlib.h>

/**
 * main - "exclude q and e"
 * Return: Always return 0.
 */

int main(void)
{
	char i ='a';

	while (i <= 'z')
	{

		if
			(i != 'e' && i != 'q') {

				putchar(i);
			
			}
		i++;
	}
	putchar('\n');
	return (0);
}
