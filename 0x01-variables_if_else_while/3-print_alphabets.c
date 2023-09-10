#include <stdio.h>
#include <stdlib.h>

/**
 * main - "prints the alphabet in upper and lower"
 * Return: Always return 0.
 */

int main(void)
{
	char i;
	char g;

	for (i = 'a'; i <= 'z'; i++)

		putchar(i);

	for (g = 'A'; g <= 'Z'; g++)

		putchar(g);
	putchar('\n');
		return (0);
}
