#include <stdio.h>

/**
 * main - main function
 * @argc: numbers of stuff added
 * @argv: the things added
 * Return: always 0 SUCCESS
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	argc++;
	argc--;

	return (0);
}
