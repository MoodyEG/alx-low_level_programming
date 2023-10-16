#include "main.h"

/**
 * reset_to_98 - updates the value to 98
 * @n: our int
 * Return: no return
 */
void reset_to_98(int *n)
{
	int *p;

	p = &n;
	*p = 98;
}
