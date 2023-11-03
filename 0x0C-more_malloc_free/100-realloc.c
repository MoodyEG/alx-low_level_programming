#include "main.h"

/**
 * _realloc -  reallocates a memory block
 * @ptr: our pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: pointer, or NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
