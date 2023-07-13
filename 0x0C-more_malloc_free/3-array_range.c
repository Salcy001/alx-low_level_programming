#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of element
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
