#include <stdio.h>

/**
 * main - prints "size of data types"
 * Return: Always 0.
 */

int main(void)
{

	int x = 20;
	float y =3.14;

	printf("size of int: %ld bytes\n", sizeof(int));
	printf("size of float: %ld bytes\n", sizeof(float));


	return (0);
}
