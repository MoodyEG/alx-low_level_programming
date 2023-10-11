#include "main.h"
/**
 * print_times_table - prints the 9 times table, starting with 0.
 */
void print_times_table(int n)
{
	int row, column, a;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				a = row * column;

				if (column == 0)
				{
					_putchar(a + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');

					if (a < 10)
					{
						_putchar(' ');
						_putchar(a % 10 + '0');
					}
					else
					{
					_putchar(a / 10 + '0');
					_putchar(a % 10 + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}