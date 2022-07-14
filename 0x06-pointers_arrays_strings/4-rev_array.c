#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array
 * @n: param of type int, number of elements in array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = (n - 1);
	int temp, i;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
