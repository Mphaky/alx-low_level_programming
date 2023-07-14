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
		if (m == 9)
			putchar(m + '0');
		else
		{
			putchar(m + '0');
		        putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
