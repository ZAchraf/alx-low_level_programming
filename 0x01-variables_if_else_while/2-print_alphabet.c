#include <stdio.h>

/**
 *  main - the main function
 *Description : the for loop
 * Return: Always 0 (Success)
*/
int main(void)
{
	char  ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}