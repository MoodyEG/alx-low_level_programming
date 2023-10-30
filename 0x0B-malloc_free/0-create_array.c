#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: The size
 * @c: our char
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size == 0)
	{
		return ('\0');
	}
	*a = char* malloc(size * sizeof(char));
	if (a == '\0')
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
