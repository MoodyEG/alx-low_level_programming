#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long i = 0;
	long n;

	for (n = 0; n < 4000000; n++)
	{
		n = a + b;
		a = b;
		b = n;

		if (a % 2 == 0)
		{
			i = i + a;
		}
	}
	printf("%ld\n", i);

	return (0);
}
