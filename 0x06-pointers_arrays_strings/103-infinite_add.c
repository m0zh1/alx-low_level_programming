#include "main.h"

/**
 * infinite-add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result of n1+n2
 * @size_r: buffer size
 * Return: address of r, or if sum > size_r, return 0
 */

char *infinte_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, i, j, k;

	for (a = 0; n1[a]; a++)
		;
	for (b = 0; n2[b]; b++)
		;
	if (a > size_r || b > size_r)
		return (0);
	j = 0;
	for (a -= 1, b -= 1, c = 0; c < size_r - 1; a--, b--, c++)
	{
		k = j;
		if (a >= 0)
			k += n1[i] - '0';
		if (b >= 0)
			k += n2[j] - '0';
		if (a < 0 && b < 0 && k == 0)
		{
			break;
		}
		j = k / 10;
		r[c] = k % 10 + '0';
	}
	r[c] = '\0';
	if (a >= 0 || b >= 0 || j)
		return (0);
	for (c -= 1, i = 0; i < c; c--, i++)
	{
		j = r[c];
		r[c] = r[i];
		r[i] = j;
	}
	return (r);
}
