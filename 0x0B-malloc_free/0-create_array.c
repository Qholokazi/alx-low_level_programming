#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: array size
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int a;

	st = malloc(sizeof(char) * size);
	if (size == 0 || st == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		st[a] = c;
	return (st);
}
