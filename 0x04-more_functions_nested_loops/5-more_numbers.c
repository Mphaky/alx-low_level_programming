#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i, m;

	 for (i = 1; i <= 10; i++)
	 {
		 for (m =0; m<= 14; m++)
		 {
			 if (m >= 10)
				 _putchar('1');
			 _putchar(m % 10 + '0');
		 }
		 _putchar('\n');
	 }
}
