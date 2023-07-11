#include "main.h"
#include <string.h>

/**
 * puts2 - function should print only one character out of two
 * stating with the first one
 * @str: input
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

