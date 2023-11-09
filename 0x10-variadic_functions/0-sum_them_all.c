#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters.
 * @n: number of arguments
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list nums;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	return (sum);
}

