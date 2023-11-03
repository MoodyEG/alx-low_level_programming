#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: our int
 * Return: pointer, or NULL if it fails
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
