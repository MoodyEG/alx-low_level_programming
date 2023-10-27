#include <stdio.h>

/**
 * main - main function
 * @argc: numbers of stuff added
 * @argv: the things added
 * Return: always 0 SUCCESS
 */

int main(int argc, char *argv[])
{
	int i;
	int mult = 0;

	for (i = 1; i < argc; i++)
	{
		mult *= atoi(argv[i])
	}
	printf("%d\n", mult)

	return (0);
}
