#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: our pointer to char
 * Return: pointer to the result
 */
char *cap_string(char *str)
{
	int a = 1;
	int i;
	char c = *str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (c >= 'a' && c <= 'z' && a)
		{
			str[i] = c - 'a' + 'A';
			a = 0;
		}
		else if (c == ' ' || c == '\t' || c == '\n' || c == ',' ||
		c == ';' ||	c == '.' || c == '!' || c == '?' ||
		c == '"' || c == '(' ||	c == ')' || c == '{' || c == '}')
		{
			a = 1;
		}
		else
		{
			a = 0;
		}
	}

	return (str);
}
