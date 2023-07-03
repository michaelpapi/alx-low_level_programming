#include "main.h"
/**
 * _memcpy - a function that copies the memory area
 * @dest: orignal memory stored
 * @src: memory copied too
 * @n: number of bytes copied
 * Return: dest according to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
