#include "main.h"
#include <stdio.h>

/**
 * print_to_1024 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_1024(int n)
{
	int a;

	a = 0
	for (n = 0; n < 1024; n++)
	{
		if ((n / 3) % == 0)
		{
			a = a + n;
		}
		else if ((n / 5) % == 0)
		{
			a = a + n;
		}
	}	
	printf("%d\n", a);
}
