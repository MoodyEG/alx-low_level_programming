#include "main.h"

/**
 * *_strchr -  locates a character in a string
 * @s: the string
 * @c: main char
 * Return: a pointer to s
 */
char *_strchr(char *s, char c)
{
	int a;
	char *b;

	while (*s != c)
	{
		s++;
		if (*s == c)
		{
			a = 1;
		}
	}
	if (a)
	{
		while (*s != '\0')
		{
			*b = *s;
			s++;
		}

		return (b);

	}
	else
	{
		return ("\0");
	}
}
