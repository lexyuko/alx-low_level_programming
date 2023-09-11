#include <stdio.h>
#include <stdlib.h>

/**
 * main - "print all single digit combination"
 * Return: Always return 0.
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

			return (0);

}
