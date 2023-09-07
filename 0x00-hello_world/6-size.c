#include <stdio.h>

/**
 * main - prints "size of data types"
 * Return: Always 0.
 */

int main(void)
{

	int x = 20;
	float y = 3.14;

	printf("size of an int: %ld bytes\n", sizeof(int));
	printf("size of a float: %ld bytes\n", sizeof(float));
	printf("size of a long long int: %lld bytes\n", sizeof(long long int));
	printf("size of a long int: %ld bytes\n", sizeof(long int));
	printf("size of a char: %c bytes\n", sizeof(char));


	return (0);
}
