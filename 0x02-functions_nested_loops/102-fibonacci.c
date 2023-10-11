#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int n;

	printf("1, 2");
	for (n = 2; n < 50; n++)
	{
		if (n % 2 == 0)
		{
			a = a + b;
			printf(", %d", a);
		}
		else
		{
			b = a + b;
			printf(", %d", b);
		}
	}
	printf("\n");

	return (0);
}
