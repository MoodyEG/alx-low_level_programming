#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 * not present in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, j;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] < value)
			printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] >= value)
		{
			printf("Value found between indexes [%u] and [%u]\n", i - jump, i);
			for (j = i - jump; j <= i; j++)
			{
				printf("Value checked array[%u] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
	}
	if (i >= size)
	{
		printf("Value found between indexes [%u] and [%u]\n", i - jump, i);
		for (j = i - jump; j < size; j++)
		{
			printf("Value checked array[%u] = [%d]\n", j, array[j]);
			if (array[j] == value)
				return (j);
		}
	}
	return (-1);
}
