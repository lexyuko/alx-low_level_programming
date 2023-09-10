#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if
						(n > 0) {
						printf("%d is positive\n");

					} else if
						 (n == 0) {
							printf("if the number is 0: is zero\n");
					} else
						printf("if the number is less than 0: is negative\n");
					return (0);
}

