#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: how much to take from s2
 * Return: pointer, or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1, lens2, i, j;
	char *s3;
/*starting now, I will pick better names other that abcijk*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;
	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;
	if (n > lens2)
		n = lens2;
	s3 = malloc(lens1 + n + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';

	return (s3);
}
