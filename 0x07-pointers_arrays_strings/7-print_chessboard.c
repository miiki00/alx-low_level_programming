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
	char h;

	for (i = 0; i < 8 ; i++)
	{
		for (j = 0; j < 8; j++)
		{
			h = a[i][j];
			if (h != ',')
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
