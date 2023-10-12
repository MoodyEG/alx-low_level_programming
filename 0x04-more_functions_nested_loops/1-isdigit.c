#include "main.h"
/**
 * _isdigit - check the numbers
 * @c: our main int
 * 
 * Return: Returns 1 if c is a number, Returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
