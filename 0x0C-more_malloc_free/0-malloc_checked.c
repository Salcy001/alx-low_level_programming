#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - array for prints a string
 * @b: number of bytes  to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
