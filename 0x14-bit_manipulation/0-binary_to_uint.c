#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len, mul = 1;

	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	len--;
	while (len >= 0)
	{
		res = res + ((b[len] - '0') * mul);
		len--;
		mul = mul * 2;
	}

	return (res);
}
