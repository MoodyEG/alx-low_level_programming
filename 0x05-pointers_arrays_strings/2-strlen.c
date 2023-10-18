#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: our pointer to char
 * Return: pointer to the result
 */
int _strlen(char *s)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i]- 'a' + 'A';
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i]- 'a' + 'A';
			}
			i--;
		}
		i++;
	}

	return (1);
}
