#include "main.h"

/**
 * get_endianness - checks the endianness.
 * need to flip to get from one number to another.
 * Return: no return
 */
int get_endianness(void)
{
	int i = 1;

	return ((int)*((char *)&i));
}
