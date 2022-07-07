#include <stdio.h>

/**
 * main - compute the fibonacci of even numbers
 * not exceeding 4000000.
 * Return: 0
 */
int main(void)
{
	int next;
	int t1, t2, total;

	t1 = 1;
	t2 = 2;
	total = 0;

	while (t1 < 4000000 && (t1 % 2 == 0))
	{
		total += t1;

		next = t1 + t2;
		t1 = t2;
		t2 = next;
	}
	printf("%d\n", total);

	return (0);
}
