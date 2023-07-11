#include "main.h"

/**
 * reverse_array - Reverse the content of  an array of integers.
 * @a: The array of integers to be reversed.
 * @n: Number of elements of array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
