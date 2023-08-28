#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: pointer to char the pointer to 2d array (board)
 *
 */


void print_chessboard(char (*a)[8])
{
		unsigned int i = 0, j = 0;

		while (a[i][i])
		{
			j = 0;
			while (j < 8)
			{
				_putchar(a[i][j]);
				j++;
			}
			_putchar('\n');
		i++;
		}
}
