#include "variadic_functions.h"

/**
 * print_strings -  prints the strings, followed by a new line at the end
 * @separator: a str
 * @n: the variable or number of args
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;

	va_list v;

	if (n == 0)
	{
		return;
	}
	va_start(v, n);
	i = n;

	while (i--)
	{
		char *sm = va_arg(v, char*);
		char *nil = "(nil)";

		printf("%s%s", sm ? sm : nil,
		i ? (separator ? separator : "") : "\n");
	}
	va_end(v);
}
