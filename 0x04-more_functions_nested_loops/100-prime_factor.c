#include "main.h"
#include <stdio.h>

/**
 * main - our main entry
 *
 * Retrun: Always 0 success
 */
int main(void)
{
	long int a, b;

	a = 612852475143;
	for (b = 2; b < a; b++)
	{
		if (n % b == 0)
		{
			n = n / b;
			b--;
		}
	}
	printf("%ld\n", b)

	return (0);
}
