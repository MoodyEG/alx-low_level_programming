#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: our main int
 */
void print_triangle(int size)
{
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if ((col + row + 1) > (size - 1))
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
	if (row < (size - 1))
	{
		_putchar('\n');
	}
	}
	_putchar('\n');
}
