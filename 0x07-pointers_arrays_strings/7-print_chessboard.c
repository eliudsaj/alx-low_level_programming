#include "main.h"

/**
 * print_chessboard - Prints a chessboard of size 8x8.
 * @a: Pointer to the first element of a 2D array of size 8x8
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
