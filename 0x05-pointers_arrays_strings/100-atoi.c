#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: pointer to our char
 * Return: the number
 */
int _atoi(char *s)
{
	unsigned int b;
	int a = 1; /*for the sign*/
	int c = 1; /*in case there are no numbers*/

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == '-')
		{
			a = -a;
		}
		if (s[b] >= '0' && s[b] <= '9')
		{
			s[b] = s[b] * a;
			_putchar(s[b]);
			c = 0;
		}
	}
	if (c)
	{
		return (0);
	}
}
