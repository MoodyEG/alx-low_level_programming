#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: pointer to our char
 * Return: no return
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	while (a - 1 >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
