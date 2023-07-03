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
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
