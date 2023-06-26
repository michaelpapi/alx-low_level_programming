#include<stdio.h>
#include "main.h"
/**
*_strlen - returns the length of the string
*@s: value to be evaluate.
*Return: not.
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
