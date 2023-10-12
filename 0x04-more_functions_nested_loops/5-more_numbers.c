#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 */
void more_numbers(void)
{
	int a, b, c1, c2;
	
	c2 = 0;
	for (b = 0; b < 10; b++)
	{
		c1 = 1;
		for (a = 0; a < 10; a++)
		{
			if (c2)
			{
				_putchar('1');
			}
			if (c1)
			{
				_putchar(a + '0');
				if (a == 9)
				{
					c2 = 1;
					a = -1;
				}
				if (a == 4 && c2 == 1)
				{
					c2 = 0;
					c1 = 0;
				}
			}
		}
		_putchar('\n');
	}
}
