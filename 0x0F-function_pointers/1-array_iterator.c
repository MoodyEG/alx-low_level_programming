#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: the array
 * @size: size of the array
 * @action: a FUnCtIoN poniter
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}

