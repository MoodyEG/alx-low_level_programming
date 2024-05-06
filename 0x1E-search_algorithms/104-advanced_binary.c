#include "search_algos.h"

/**
 * binary_search_rec - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @start: the first index of the subarray
 * @end: the last index of the subarray
 * @value: the value to search for
 * Return: the first index where value is located
 * not present in array or if array is NULL.
 */
int binary_search_rec(int *array, size_t start, size_t end, int value)
{
	size_t i, mid;

	if (end >= start)
	{
		mid = (end + start) / 2;
		printf("Searching in array: %d", array[start]);
		for (i = start + 1; i <= end; i++)
			printf(", %d", array[i]);
		printf("\n");
		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] < value)
				return (mid);
			else
				return (binary_search_rec(array, start, mid, value));
		}
		if (array[mid] > value)
			return (binary_search_rec(array, start, mid, value));
		return (binary_search_rec(array, mid + 1, end, value));
	}
	return (-1);
}
/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using the Advanced Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_rec(array, 0, size - 1, value));
}

