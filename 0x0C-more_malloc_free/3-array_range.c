#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: our range of values
 * @max: our range of values
 * Return: pointer, or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *a;
	int len, i, j;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	j = min;
	for (i = 0; i < len; i++)
	{
		a[i] = j;
		j++;
	}

	return (a);
}
