#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int i;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[m] = src[i];
		m++;
		i++;
	}

	dest[m] = '\0';
	return (dest);
}
