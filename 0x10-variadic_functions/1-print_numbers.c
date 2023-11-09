#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @n: number of arguments
 * @separator: what separates the numbers
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}

