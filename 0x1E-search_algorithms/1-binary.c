#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value : the value to search for
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, start, end, mid;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;
	while (1)
	{
		mid = (end + start) / 2;
		printf("Searching in array: %d", array[start]);
		for (i = start + 1; i <= end; i++)
			printf(", %d", array[i]);
		printf("\n");
		if (array[mid] == value)
			return (array[mid]);
		else if (start == end)
			break;
		else if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			start = mid + 1;
	}
	return (-1);
}
