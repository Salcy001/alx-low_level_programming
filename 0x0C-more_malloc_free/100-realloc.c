#include <stdlib.h>
#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: old size  of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer  to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *clone, *relloc;
unsigned int i;

if (ptr != NULL)
clone = ptr;
else
{ return (malloc(new_size)); }
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{ free(ptr);
return (NULL); }
relloc = malloc(new_size);
if (!relloc)
return (0);
for (i = 0; i < (old_size || i < new_size); i++)
{
*(relloc + i) = clone[i];
}
free(ptr);
return (relloc);
}
