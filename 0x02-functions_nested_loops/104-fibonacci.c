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
	int n;

	printf("1, 2");
	for (n = 2; n < 98; n++)
	{
		if (n % 2 == 0)
		{
			a = a + b;
			printf(", %ld", a);
		}
		else
		{
			b = a + b;
			printf(", %ld", b);
		}
	}
	printf("\n");

	return (0);
}
