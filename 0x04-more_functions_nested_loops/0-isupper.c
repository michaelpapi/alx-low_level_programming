#include "main.h"
/**
 * _isupper - detect upper case alphabets
 *
 * @c: what inputs the character
 *
 * Return (1) for true and (0) if false
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= "Z")
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
