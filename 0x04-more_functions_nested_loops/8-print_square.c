#include "main.h"

/**
 * print_square -  a function that prints a square, followed by a new line.
 * @size: our main int
 */
void print_square(int size){
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		if (b < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
