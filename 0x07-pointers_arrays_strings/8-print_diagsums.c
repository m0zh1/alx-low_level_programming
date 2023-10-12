#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of the 2 diagonals of square matrix of ints
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int backDiagSum = 0;
	int ssum = 0;

	for (int i = 0; i < size; ++i)
	{
		backDiagSum += a[size * i + i];
		ssum += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", backDiagSum, ssum);
}
