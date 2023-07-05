#include "main.h"

/**
 * factorial -Entry point
 * @n: the number to calculate the factorial
 *
 * Return: integer valuse
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
