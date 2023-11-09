#include "variadic_functions.h"

/**
 * f_char - prints char
 * @valist: our valist
 * @a: our seperator
 * Return: no return
 */
void f_char(char *a, va_list valist)
{
	printf("%s%c", a, va_arg(valist, int));
}
/**
 * f_int - prints int
 * @valist: our valist
 * @a: our seperator
 * Return: no return
 */
void f_int(char *a, va_list valist)
{
	printf("%s%d", a, va_arg(valist, int));
}
/**
 * f_float - prints float
 * @valist: our valist
 * @a: our seperator
 * Return: no return
 */
void f_float(char *a, va_list valist)
{
	printf("%s%f", a, va_arg(valist, double));
}
/**
 * f_string - prints string
 * @valist: our valist
 * @a: our seperator
 * Return: no return
 */
void f_string(char *a, va_list valist)
{
	char *b = va_arg(valist, char *);

	if (!b)
		b = "(nil)";
	printf("%s%s", a, b);
}
/**
 * print_all - prints all, followed by a new line.
 * @format: types of arguments passed to the function
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list valist;
	iden_t iden[] = {
		{"c", f_char}, /*C*/
		{"i", f_int}, /*i*/
		{"s", f_string}, /*s*/
		{"f", f_float}, /*you know :P*/
		{NULL, NULL},
	};
	char *a = "";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (iden[j].iden)
		{
			if (format[i] == iden[j].iden[0])
			{
				iden[j].f(a, valist);
				a = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}

