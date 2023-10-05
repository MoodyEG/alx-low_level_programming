#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = sizeof(char);
	int b = sizeof(int);
	int i = sizeof(long int);
	int j = sizeof(long long);
	int k = sizeof(float);

	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long int: %d byte(s)\n", i);
	printf("Size of a long long int: %d byte(s)\n", j);
	printf("Size of a float: %d byte(s)\n", k);

	return (0);
}
