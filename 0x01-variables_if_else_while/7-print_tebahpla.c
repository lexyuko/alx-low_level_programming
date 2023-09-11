#include <stdio.h>
#include <stdlib.h>

/**
 * main - "print in reverse"
 * Return: Always return 0.
 */

int main(void)
{
	char rev;

	for (rev = 'a'; rev <= 'z'; rev--)
		putchar(rev);
	putchar('\n');
		return (0);
}
