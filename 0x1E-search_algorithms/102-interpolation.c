#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 * not present in array or if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high]
		- array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		else
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos -  1;
		else
			low = pos +  1;
	}
	return (-1);
}
