#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: The string to search in.
 * @accept: the searching material.
 * Return: A pointer to the first occurrence
 * or NULL if the character is not found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		*a = *accept;
		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
	s++;
	}

	return ('\0');
}
