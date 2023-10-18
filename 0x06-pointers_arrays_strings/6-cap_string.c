#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: our pointer to char
 * Return: pointer to the result
 */
char *cap_string(char *str)
{
	int a = 1;
	int i

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			a = 1;
		}
		else if (a && ((str[i] >= 'a' && str[i] <= 'z')))
		{
			str[i] = str[i] - 32;
			a = 0;
		}
		else
		{
			a = 0;
		}
	}

	return (str);
}
