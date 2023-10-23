#include "main.h"

/**
 * *_memset -  fills memory with a constant byte
 * @b: The buffer to be printed.
 * @n: The number to fill
 * @s: main pointer
 * Return: a pointer to the memory area s
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