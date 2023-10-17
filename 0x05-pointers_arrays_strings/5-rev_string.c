#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: pointer to our char
 * Return: no return
 */
void rev_string(char *s)
{
	int a = 0; /*our length*/
	int b = 0 
	int c; /*our temp*/

	while (s[a] != '\0')
	{
		a++;
	}
	a--;

	while (a > b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a--;
		b++;
	}
}
