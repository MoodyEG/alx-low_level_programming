#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: The array to print.
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
