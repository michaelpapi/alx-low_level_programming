#include "main.h"
/**
* print_square - prints a square
* @size: takes in the size of the square
*/
void print_square(int size)
{
	int i, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
			_putchar('#');
		_putchar('\n');
	}
}
