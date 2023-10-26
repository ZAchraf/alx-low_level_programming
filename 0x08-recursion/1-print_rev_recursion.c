#include "main.h"

/**
 * _print_rev_recursion - prints a string backward
 * @s: is a pointer to a string
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
