#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: a FUnCtIoN poniter
 * Return: no return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);

		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1)
}
#include "function_pointers.h"

/**
 *  * int_index - searches for an integer
 *   * @array: the array
 *    * @size: size of the array
 *     * @cmp: a FUnCtIoN poniter
 *      * Return: no return
 *       */
int int_index(int *array, int size, int (*cmp)(int))
{
		int i = 0;

			if (array && size && cmp)
			{
						if (size <= 0)
										return (-1);

								while (i < size)
								{
												if (cmp(array[i]))
																	return (i);
								}
			}

				return (-1)
}
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: a FUnCtIoN poniter
 * Return: no return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);

		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1)
}

