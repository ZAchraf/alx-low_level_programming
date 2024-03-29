#include "main.h"
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: pointer to an array of arguments
 * Return: 0-success, else fail
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		int lc = 0;
		int m = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= c[i])
			{
				lc += m / c[i];
				m = m % c[i];
				if (m % c[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
