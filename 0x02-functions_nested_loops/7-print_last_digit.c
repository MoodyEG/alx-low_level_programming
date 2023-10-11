#include "main.h"
/**
 * print_last_digit - check the code
 * @n: our int
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = -1 * (n % 10);
	}
	a = n % 10;
	_putchar(a + '0');

	return (a);
}
