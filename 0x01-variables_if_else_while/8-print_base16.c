#include <stdio.h>

/**
 *  main - the main function
 *Description : the for loop
 * Return: Always 0 (Success)
*/
int main(void)
{
	char  hexa;

	for (hexa = 0; hexa <= 16; hexa++)
	{
		if (hexa < 10)
		{
			putchar('0' + hexa);
		} else
		{
			putchar('a' + (hexa - 10);
	}
	putchar('\n');
	return (0);
}
