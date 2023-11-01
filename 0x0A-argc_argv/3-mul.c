#include "main.h"

/**
 * main - is the main function
 * @argc: how many argument
 * @argv: contains all the strings
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int m;

	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
	m = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", m);
	}
	return (0);
}
