#include "main.h"
#include <stdio.h>

/**
 * print_array -Entry point
 * @a: array
 * @n: number of values to be printed
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		printf("%d", a[e]);
		if (e != n - 1)
			printf(", ");
	}
	printf("\n");
}
