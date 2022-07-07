#include <stdio.h>

/**
 * main - compute the fibonacci of even numbers
 * not exceeding 4000000.
 * Return: 0
 */
int main(void)
{
	int i;
	int t1, t2, total;

	t1 = 1;
	t2 = 2;
	total = 0;

	while (t2 < 4000000 && t2 % 2 == 0)
	{
		total += t2;
		i = t2;
		t2 += t1;
		t1 = i;
	}
	printf("%d\n", total);

	return (0);
}
