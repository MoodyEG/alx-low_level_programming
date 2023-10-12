#include "main.h"
/**
 * main - check the code.
 * @c: our main int
 * 
 * Return: Returns 1 if c is uppercase, Returns 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
