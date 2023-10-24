#include "main.h"

/**
 * print_chessboard - it prints the chesboard
 * @a: rows
 * return: void
*/

void print_chessboard(char (*a)[8])
{
	int ir, jr;

	for (ir = 0; ir < 8; ir++)
	{
		for (jr = 0; jr < 8; jr++)
		{
			_putchar(a[ir][jr]);
		}
		_putchar('\n');
	}
}
