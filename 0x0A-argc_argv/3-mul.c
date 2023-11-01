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

	m = argv[0] * argv[1];
	printf("%d", m);
	return (0);
}
