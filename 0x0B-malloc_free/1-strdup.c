#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Entry point
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aa;
	int i, x = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aa = malloc(sizeof(char) * (i + 1));

	if (aa == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		aa[x] = str[x];

	return (aa);
}
