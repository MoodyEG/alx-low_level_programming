#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - our main
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0;
	int b = 0;

	srand(time(0));
	while (a < (2772 - 128))
	{
		b = (rand() % 97) + 31;
		a = a + b;
		printf("%c", b);
	}
	printf("%c\n", (2772 - a));

	return (0);
}
