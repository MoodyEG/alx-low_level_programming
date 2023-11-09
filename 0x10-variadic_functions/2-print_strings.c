#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @n: number of arguments
 * @separator: what separates the strings
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;
	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(string, char*);
		if (a)
		{
			printf("%s", a);
			if (separator && i < n - 1)
				printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");
}

