#include<stdio.h>
/**
 * main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char ar;

	for (a = 48; a < 58; a++)
	{
	putchar(a);
	}
for (ar = 'a'; ar <= 'f'; ar++)
{
putchar(ar);
}
putchar('\n');
return (0);
}
