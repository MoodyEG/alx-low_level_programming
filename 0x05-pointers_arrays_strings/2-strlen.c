#include "main.h"

/**
 * *cap_sing - capitalizes all words of a sing
 * @s: our pointer to char
 * Return: pointer to the result
 */
int _strlen(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i]- 'a' + 'A';
	}
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		s[i] == '}')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i]- 'a' + 'A';
			}
			i--;
		}
		i++;
	}

	return (1);
}
