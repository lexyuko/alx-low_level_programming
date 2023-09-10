#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - "print last digit"
 * Return: Always return 0.
 */

int main(void)
{
	int n, p;

		srand(time(0));
			n = rand() - RAND_MAX / 2;
				/* your code goes there */
			p = n % 10;
			if
				(p > 5)
				{
					printf("Last digit of %d is %d and is greater than 5", n, p);
				}

				return (0);
}
