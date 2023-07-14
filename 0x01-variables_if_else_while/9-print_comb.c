#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int m;

	for (m = 0 ; m < 10 ; m++)
	{
		putchar(m);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
