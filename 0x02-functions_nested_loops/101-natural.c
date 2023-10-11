#include "main.h"
#include <stdio.h>

/**
 * main - Prints all natural numbers from n to 98.
 * Return: always 0
 */
int main(void)
{
	int a;
	int n;

	a = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			a = a + n;
		}
	}
	printf("%d\n", a);

	return (0);
}
