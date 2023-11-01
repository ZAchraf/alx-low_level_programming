#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies the second and third param
 * @argc: how many argument
 * @argv: contains all the strings
 * Return: 0 = success else fail
*/

int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
