#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	int n;

	printf("1, 2");
	for (n = 2; n < 98; n++)
	{
		if (n % 2 == 0)
		{
			a = a + b;
			printf(", %lu", a);
		}
		else
		{
			b = a + b;
			printf(", %lu", b);
		}
	}
	printf("\n");

	return (0);
}
