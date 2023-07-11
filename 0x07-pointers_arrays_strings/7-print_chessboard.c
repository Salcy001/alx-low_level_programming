#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int h;

	for (i = 0; i < 8; i++)
	{
		for (h = 0; h < 8; h++)
			_putchar(a[i][h]);
		_putchar('\n');
	}
}
