#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: pur main int
 * @size: size of the array
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	long int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i][i]
	}
	printf("%ld, ", sum);
	while (j < size)
	{
		sum += a[i][j]
		j++
		i--
	}
	printf(" %ld\n", sum);
}
