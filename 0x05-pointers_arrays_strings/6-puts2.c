#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to our char
 * Return: no return
 */
void puts2(char *str)
{
	int a = 0; /*our length*/

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
		_putchar(str[a]);
		}
		a++;
	}
}
