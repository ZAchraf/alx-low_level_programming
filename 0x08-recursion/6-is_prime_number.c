#include "main.h"

/**
 * is_prime_number - prime number checker
 * @np: int
 * @n: int
 * Return: returns 1 if the input integer is a PN, otherwise return 0
*/

int check_pn(int n, int np);
int is_prime_number(int n)
{
	return (check_pn(n, 2));
}

/**
 * check_pn - a custome checker
 * @n: int
 * @np: int
 * Return: int
*/

int check_pn(int n, int np)
{
	if (np >= n && n > 1)
	{
		return (1);
	}
	else if (n % np == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (check_pn(n, np + 1));
}
