#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print numbers from 0 to 9
* Return: Always 0 (Success)
*/
int main(void)
{
	int b;

	b = 0;
	while (b < 10)
	{
	putchar(b + '0');
	b++;
	}
	putchar('\n');
	return (0);
}
