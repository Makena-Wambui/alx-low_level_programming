#include "main.h"
/**
 * print_chessboard - this function prints the chessboard.
 * @a: pointer to a 2d array of characters.
 * Each element of this array is a character.
 * Return:void.
 */

void print_chessboard(char (*a)[8])
{
	int d, b;

	for (d = 0; d < 8; d++)
	{
		for (b = 0; b < 8; b++)
		{
		_putchar(a[d][b]);
		}
	_putchar('\n');
	}
}






