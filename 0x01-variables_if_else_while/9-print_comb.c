#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w;

	for (w = 48; w < 58; w++)
	{
		putchar(w);
		if (w != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(',');
	return (0);
}
