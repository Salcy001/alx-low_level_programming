#include <stdio.h>
#include <math.h>

/**
 * main -finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)

{
	long n, i;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
			n = n / i;
	}
	printf("%ld\n", n);

	return (0);
}







