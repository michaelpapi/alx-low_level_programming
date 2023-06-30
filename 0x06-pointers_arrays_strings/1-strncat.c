#include "main.h"

/**
 * _strcat - main function that joins the two strings
 * @dest: first string
 * @src: second string
 * @n: number of characters to be joined
 *
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
