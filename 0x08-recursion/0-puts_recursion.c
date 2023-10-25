#include "main.h"

/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: our string
 * Return: no return
 */
void _puts_recursion(char *s)
{
	_putchar(s);
	s++;
	_puts_recursion(s);
}
