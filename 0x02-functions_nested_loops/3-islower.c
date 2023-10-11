#include "main.h"
/**
 * _islower - check the code
 * @c: our int
 *
 * Return: 1 if c is lowercas, 0 otherwisee
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
