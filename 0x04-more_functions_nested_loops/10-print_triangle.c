#include "main.h"

/**
 * print_triangle - prints a triangle,followed by a new line
 * @size: size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i;
	int z;
	int p;
	int s;

	if (size > 0)
	{
		p = size - 1;

		for (i = 0; i < size ; i++)
		{
			for (z = p; z > 0 ; z--)
			{
				_putchar (' ');
			}
			for (s = 0; s <= i; s++)
			{
				_putchar (35);
			}

			p--;

			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
