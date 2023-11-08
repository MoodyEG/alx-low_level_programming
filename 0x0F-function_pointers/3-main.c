#include "3-calc.h"

/**
 * main -  main function
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*math)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	math = get_op_func(argv[2]);
	if (math == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", math(i, j));

	return (0);
}

