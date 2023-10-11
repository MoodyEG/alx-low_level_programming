#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	long a = 1, b = 2, i, a1, b1, ii;
	int c, case1, case2;

	case1 = case2 = 1;
	printf("1, 2");
	for (c = 2; c < 98; c++)
	{
		if (case1)
		{
		i = a + b;
		printf(", %ld", i);
		a = b;
		b = i;
		}
		else
		{
			if (case2) /*once it reaches the limit we simply try to devide the number into 2*/
			{
				a1 = a % 1000000000;
				b1 = b % 1000000000;
				a = a / 1000000000;
				b = b / 1000000000;
				case2 = 0; /*will continue case 2 but won't devide anymore*/
			}
			ii = (a1 + b1);
			i = a + b + (ii / 1000000000); /*for any number goes over that needs to be added*/
			printf(", %ld", i);
			printf("%ld", ii % 1000000000); /*the '%' here so we only take the first 9 numbers only*/
			a = b;
			a1 = b1;
			b = i;
			b1 = (ii % 1000000000);
		}
		if (((a + b) < 0) && case1 == 1) /*that means it is out of long range*/
			case1 = 0; /*will lead us to case 2*/
	}
	printf("\n");

	return (0);
}
