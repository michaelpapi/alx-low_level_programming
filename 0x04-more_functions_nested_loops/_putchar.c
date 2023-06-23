#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: Character to print
 *
 * Return: On success 1.
 * On error, -1 returns
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
