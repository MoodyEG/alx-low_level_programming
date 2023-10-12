#include "main.h"
#include <stdio.h>

/**
 * main - our main entry
 *
 * Retrun: Always 0 success
 */
int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", a);
		}
	}
	_putchar('\n');

	return (0);
}
