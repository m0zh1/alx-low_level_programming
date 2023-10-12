#include <stdio.h>

/**
 * main - computes & print the first 98 fibonacci
 * numbers starting with 1 and 2, followed by newline
 * numbers are separated by a comma
 * Return: 0
 */
#define LIMIT 10000000000

int main(void)
{
	unsigned long int t1 = 0, t2 = 0, j = 1, k = 2;
	unsigned long int temp1, temp2, temp3;
	int count;

	printf("%lu, %lu, ", j, k);
	for (count = 2; count < 98; count++)
	{
		if (j + k > LIMIT || t2 > 0 || t1 > 0)
		{
			temp1 = (j + k) / LIMIT;
			temp2 = (j + k) % LIMIT;
			temp3 = t1 + t2 + temp1;
			t1 = t2;
			t2 = temp3;
			j = k;
			k = temp2;
			printf("%lu%010lu", t2, k);
		}
		else
		{
			temp2 = j + k;
			j = k;
			k = temp2;
			printf("%lu", k);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
