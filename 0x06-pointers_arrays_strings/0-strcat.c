#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: our pointer to char
 * @src: our pointer to char
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int c = 0;

	while (dest[a] != '\0')
	{
		_putchar(dest[a]);
		a++;
	}
	for (c = 0; src[c] != '\0'; c++)
	{
		_putchar(src [c]);
	}

	return ('\0');
}
