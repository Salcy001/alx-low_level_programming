#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i;

	int o;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	i--;

	for (o = 0; o <= i; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
