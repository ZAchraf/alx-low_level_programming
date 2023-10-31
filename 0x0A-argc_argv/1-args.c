#include "main.h"

/**
 * main - is the main function
 * @argc: how many argument
 * @argv: contains all the strings
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0");
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	(void)argv;

	return (0);
}
