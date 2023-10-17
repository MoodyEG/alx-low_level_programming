#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: pointer to our char
 * Return: no return
 */
void rev_string(char *s)
{
	int a = 0;
	int b[];
	int c = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (a >= 0)
	{
		b[c] = s[a];
		a--;
		c++;
	}
	_putchar('\n');
}
