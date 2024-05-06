#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the  Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 * not present in array or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, start, end, mid;

	if (array == NULL)
		return (-1);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		i *= 2;
	}
	start = i / 2;
	if (i < size - 1)
		end = i;
	else
		end = size - 1;
	printf("Value found between indexes [%u] and [%u]\n", start, end);
	while (1)
	{
		mid = (end + start) / 2;
		printf("Searching in array: %d", array[start]);
		for (i = start + 1; i <= end; i++)
			printf(", %d", array[i]);
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (start == end)
			break;
		else if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			start = mid + 1;
	}
	return (-1);
}
