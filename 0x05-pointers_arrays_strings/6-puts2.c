#include "main.h"

/**
 * puts2 - Entry point
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	char *y = str;
	int c;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	a = longi - 1;
	for (c = 0; c <= a; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
