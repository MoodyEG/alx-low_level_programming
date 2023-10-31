#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: The string to copy
 * @s2: The string to copy
 * Return: pointer to string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	a = malloc(i + j + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		a[i + j] = s2[j];
	}

	return (a);
}
