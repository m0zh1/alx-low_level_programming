#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array
 * @n: param of type int, number of elements in array
 */

void reverse_array(int *a, int n)
{
	int start, end, tmp;

	start = 0;
	end = (n - 1);

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
