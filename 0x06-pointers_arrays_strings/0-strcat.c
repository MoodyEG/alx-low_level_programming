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
	int *b;

	while (dest[a] != '\0')
	{
		b[a] = dest[a];
		a++;
	}
	for (c = 0; src[c] != '\0'; c++)
	{
		b[a + c] = src [c];
	}
	b[a + c] = '\0';

	return (b);
}
