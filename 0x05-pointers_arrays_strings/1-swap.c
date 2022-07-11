#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: param 1 of type int *
 * @b: param 2 of type int *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
