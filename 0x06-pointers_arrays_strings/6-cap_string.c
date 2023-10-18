#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: our pointer to char
 * Return: pointer to the result
 */
char *cap_string(char *str)
{
	int a = 1;

	while (str != '\0')
	{
		if (str == ' ' || str == '\t' || str == '\n' ||
			str == ',' || str == ';' || str == '.' ||
			str == '!' || str == '?' || str == '"' ||
			str == '(' || str == ')' || str == '{' || str == '}')
		{
			a = 1;
		}
		else if (a && ((str >= 'a' && str <= 'z')))
		{
			str = str - 32;
			a = 0;
		}
		else
		{
			a = 0;
		}
		str++;
	}

	return (str);
}
