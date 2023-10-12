#include "main.h"
#include <stdio.h>

/**
 * print_number - prints a number
 * @n: our int
 */
void print_number(int n)
{
	int a, b, c, d, e;

	e = 0
	if (n < 0)
	{
		n = -n
		e = 1
	}
	a = n % 10;
	b = (n / 10) % 10;
	c = (n / 100) % 10;
	d = (n / 1000) % 10;
	if (e)
	{
		_putchar('-');
		e = 0;
	}
	if (d > 0)
	{
		_putchar(d + '0');
	}
	if (c > 0 || d > 0)
	_putchar(c + '0');
	if (b > 0 || c > 0 || d > 0)
	_putchar(b + '0');
	_putchar(a + '0');
	_putchar('\n');
}
