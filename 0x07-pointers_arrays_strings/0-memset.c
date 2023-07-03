#include "main.h"
/**
 * _memset - fills a block of memory with b
 * @s: pointer address
 * @b: desired value to be changed
 * @n: number of bytes to be changed
 * Return: pointer memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++)
	{
		s[i] = b;
	}
	return (s);
}
