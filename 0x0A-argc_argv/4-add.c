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
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		if (*argv[i] <= '0' || *argv[i] >= '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
