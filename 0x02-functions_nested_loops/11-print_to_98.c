#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural nums n - 98
 * @n: print starting from num n
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98 || n != 98)
		{
			printf("%d,", n);
			n++;
		}
	}
	else
	{
		while (n >= 98 || n != 98)
		{
			printf("%d,", n);
			n--;
		}
	}
	printf("\n");
}
