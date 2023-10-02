#include "main.h"

/**
* power_exponent - returns the natural square root of a number.
* @n: input number.
* @a: iterator.
* Return: square root or -1
*/

int power_exponent(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
		{
			return (a);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + power_exponent(n, a + 11));

}

/** 
 * _sqrt_recursion - returns the natural of a number
 * @n: input number
 * return: natural square root
 */



int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	return (power_exponent(n, 2));
}

