#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (*(haystack + a) != '\0')
	{
		while (*(needle + b) != '\0' && *(haystack + a) == *(needle + b))
		{
			a++;
			b++;
		}
		if (*(needle + b) == '\0')
			return (haystack);

		haystack++
	}

	return (NULL);
}
