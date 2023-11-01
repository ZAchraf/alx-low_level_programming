#include "main.h"

/**
 * main - multiplies the second and third param
 * @argc: how many argument
 * @argv: contains all the strings
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Errori\n");
		return (1);
	}
	else
	{
	m = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", m);
	}
	return (0);
}
