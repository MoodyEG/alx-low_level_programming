#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search in.
 * @accept: The string containing characters to count.
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a, b;
	int c;

	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				n++;
				c = 1;
				break;
			}
		}
		if (c == 0)
			break;
	}
	return (n);
}
