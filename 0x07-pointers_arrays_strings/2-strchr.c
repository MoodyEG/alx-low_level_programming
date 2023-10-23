#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 * Return: A pointer to the first occurrence
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	char *b;

	*b = '\0';
	while (*s != '\0')
	{
		if (*s == c)
			*b = *s;
			break;
		s++;
	}

	return (b);
}
