#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The 2D array representing the chessboard.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	/* Iterate over each row of the chessboard */
	for (row = 0; row < 8; row++)
	{
		/* Iterate over each column of the current row */
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
