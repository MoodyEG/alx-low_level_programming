#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: The buffer to be printed.
 * @n: The number to fill
 * @src: main source
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
