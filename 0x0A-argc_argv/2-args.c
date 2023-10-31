#include "main.h"

/**
 * main - is the main function
 * @argc: how many argument
 * @argv: contains all the strings
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	(void)argc;
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv++);
	}
	return (0);
}
