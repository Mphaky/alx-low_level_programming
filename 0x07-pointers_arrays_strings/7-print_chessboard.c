#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int f;
	int k;

	for (f = 0; f < 8; f++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[f][k]);
		_putchar('\n');
	}
}
