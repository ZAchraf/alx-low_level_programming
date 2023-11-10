#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: a str
 * @n: the variable or number of args
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list nb;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(nb, n);
	while (i--)
	{
		printf("%d%s", va_arg(nb, int), i ? (separator ? separator : "") : "\n");
	}
	va_end(nb);
}
