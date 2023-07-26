#include "main.h"
/**
 * reverse_array - reverse array of intergers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m;
	int o;

	for (m = 0; m < n--; m++)
	{
		o = a[m];
		a[m] = a[n];
		a[n] = o;
	}
}
