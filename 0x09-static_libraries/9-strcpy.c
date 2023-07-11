#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int v = 0;
	int t = 0;


	while (*(src + v) != '\0')
	{
		v++;
	}
	for ( ; t < v ; t++)
	{
		dest[t] = src[t];
	}
	dest[v] = '\0';
	return (dest);
}
