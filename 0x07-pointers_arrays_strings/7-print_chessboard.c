# include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of pieces
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 1; i < 9; i++)
	{
		for (j = 1; j < 9; j++)
		{
			_putchar(a[i - 1][j - 1]);
		}
		_putchar('\n');
	}
}
