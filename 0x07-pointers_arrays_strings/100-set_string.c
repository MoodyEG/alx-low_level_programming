#include "main.h"

/**
 * set_string -  sets the value of a pointer to a char.
 * @to: what to edit
 * @s: where to be edited
 * Return: no return
 */
void set_string(char **s, char *to)
{
	*s = to;
}
