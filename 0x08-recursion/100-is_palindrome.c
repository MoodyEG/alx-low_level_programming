#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 * @s: The string
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
	}
	else if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s));
}
/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome
 * @s: The string
 * @a: Start index
 * @b: End index
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int a, int b)
{
	if (a >= b)
	{
		return (1);
	}

	if (s[a] != s[b])
	{
		return (0);
	}

	return (is_palindrome_helper(s, a + 1, b - 1));
}
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	if (i == 0 || i == 1)
	{
		return (1);
	}
	return (is_palindrome_helper(s, 0, i - 1));
}
