#include "main.h"

/**
 * print_chessboard - prints a chess board.
 * @a: Numbers of rows of the chess.
 *
 * Return: Void.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][0] != 0 ; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != ',')
			{
				_putchar(a[i][j]);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
