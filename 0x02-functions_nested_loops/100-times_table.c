#include "main.h"

/**
 * print_times_table - computes the times table of n, starting from 0
 *@n: type int, argument
 * if n > 15 or n < 0, print nothing
 */
void print_times_table(int n)
{
	int i = 0, j, prod;

	if (n < 0 || n > 15)
		return;
	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (prod > 99)
			{
				_putchar(prod / 100 + '0');
				_putchar((prod / 10 % 10) + '0');
				_putchar(prod % 10 + '0');
			}
			else if (prod > 9)
			{
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
				_putchar(prod + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i += 1;
	}
}
