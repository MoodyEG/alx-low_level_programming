#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: numbers of stuff added
 * @argv: the things added
 * Return: always 0 SUCCESS, or 1 if error
 */

int main(int argc, char *argv[])
{
	int i, j, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mult = i * j;
	printf("%d\n", mult);

	return (0);
}
