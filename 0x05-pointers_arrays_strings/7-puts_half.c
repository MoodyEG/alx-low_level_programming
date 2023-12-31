#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to our char
 * Return: no return
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	b = a / 2;
	if (a % 2 == 1)
	{
		b++;
	}
	while (b < a)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
