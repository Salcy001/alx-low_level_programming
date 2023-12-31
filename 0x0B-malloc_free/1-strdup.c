#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ppp;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	ppp = malloc(sizeof(char) * (i + 1));

	if (ppp == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ppp[r] = str[r];

	return (ppp);
}
