#include "main.h"

/**
* binary_to_uint - conversion of binary to unsigned int
* @b: binary
*
* Return: unsigned int
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int len = 0;
	unsigned int k = 1;

	if (!b)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	len--;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			i += k;
		}
		len--;
		k *= 2;
	}

	return (i);
}
