#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: pointer to our char
 * Return: no return
 */
void rev_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
