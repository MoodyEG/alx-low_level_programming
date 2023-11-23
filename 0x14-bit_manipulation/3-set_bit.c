#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: is the index
 * @n: our int
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0;
	int safe = 0, log[64];

	if (index == 0)
	{
		*n = *n | 1;
		return (1);
	}
	while (i <= 63)
	{
		if (i == index)
		{
			*n = *n | 1;
			safe = 1;
			break;
		}
		log[i] = (*n & 1);
		*n = *n >> 1;
		i++;
	}
	if (safe == 0)
		return (-1);
	while (i > 0)
	{
		*n = *n << 1;
		*n = *n | log[i - 1];
		i--;
	}

	return (1);
}
