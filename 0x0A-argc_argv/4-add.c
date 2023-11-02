#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: how many argument
 * @argv: contains all the strings
 * Return: 0 = success else fail
*/

int main(int argc, char *argv[])
{
	int S = 0;
	int i;
	int c = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
		c++;
		}
	}

	if (argc < 2 && c == 0)
	{
		printf("0\n");
	}
	else if (argc > 1 && c == 0)
	{
		for (i = 1; i < argc; i++)
		{
			S = S + atoi(argv[i]);
		}
		printf("%d", S);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
