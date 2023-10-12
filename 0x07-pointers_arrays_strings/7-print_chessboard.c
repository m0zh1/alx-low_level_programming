#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: 2-d array to print
 *
 */

void print_chessboard(char (*a)[8])
{
	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
