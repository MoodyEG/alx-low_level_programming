#include "main.h"

/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: number of strings
 * @av: the strings
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, t = 0, l = 0;
	char *a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
		}
		l += j + 1;
	}
	a = (char *)malloc(sizeof(char) * (l + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			a[t] = av[i][j];
			j++;
			t++;
		}
		a[t] = '\n';
		t++;
	}
	a[t] = '\0';

	return (a);
}
