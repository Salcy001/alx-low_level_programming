#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
