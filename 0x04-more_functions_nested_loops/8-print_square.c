#include "main.h"

/**
 * print_square - prints a square,followed by a new linw;
 * @size: print size
 * Return: Always 0
 */

void print_square(int size)
{
	int i;
	int e;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (e = 0; e < size; e++)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}

}




