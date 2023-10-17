#include "main.h"

/**
 * print_array - that prints n elements of an array
 * @a: pointer to our int
 * @n: our int
 * Return: no return
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 1; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
