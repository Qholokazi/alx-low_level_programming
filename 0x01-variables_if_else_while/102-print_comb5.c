#include<stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s, t;

	for (s = 0; s < 100; s++)
	{
		for (t = 0; t < 100; t++)
		{
			if (s < t)
			{
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);
				putchar(' ');
				putchar((t / 10) + 48);
				putchar((t % 10) + 48);
				if (s != 98 || t != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
