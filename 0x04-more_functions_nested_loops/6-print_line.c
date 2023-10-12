#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: our main int
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--
	}
	_putchar('\n');
}
