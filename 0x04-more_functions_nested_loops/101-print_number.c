#include "main.h"

/**
 * print_number - prints a number
 * @n: our int
 *
 */
void print_number(int n)
{
	int a, b, c;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
		a = n;
	}
	b = a;
	c = 1;
	while (b > 9)
	{
		b = b / 10;
		c = c * 10;
	}
	for (;c >= 1; c = (c / 10))
	{
		_putchar(((a / c) % 10) + '0');
	}
}
