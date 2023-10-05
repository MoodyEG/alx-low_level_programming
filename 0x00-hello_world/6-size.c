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
	printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)\n",a,b,i,j,k);

	return (0);
}
