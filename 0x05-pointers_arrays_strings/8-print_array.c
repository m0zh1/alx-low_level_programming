#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elems in an array, sep by comma
 * @a: param of type int *
 * @n: param of type int, number of elems to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
