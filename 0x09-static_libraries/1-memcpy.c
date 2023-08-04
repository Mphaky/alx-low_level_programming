#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where its stored
 * @src: memory where its copied
 * @n: number of bytes
 *
 * Return: copied memory with a byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int m = 0;
        int i = n;

        for (; m < i; m++)
        {
                dest[m] = src[m];
                n--;
        }
        return (dest);
}
