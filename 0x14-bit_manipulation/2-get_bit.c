#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: is the index
 * @n: our int
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 0;

	if (index == 0)
		return (n & 1);
	while (i < index)
	{
		i++;
		n = n >> 1;
		if (i == index)
		{
			return (n & 1);
		}
	}

	return (-1);
}
