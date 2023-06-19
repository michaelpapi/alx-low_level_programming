#include <stdio.h>

/**
* main - main function
*
* Return: Always 0
*/
int main(void)
{
  int doubles;
  int ones;

  for (doubles = 0; doubles <= 9; doubles++)
    {
      for (ones = doubles + 1; ones <= 9; ones++)
	{
	  putchar(doubles + '0');
	  putchar(ones + '0');

	  if (doubles < 8)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  putchar('\n');
  return (0);
}
