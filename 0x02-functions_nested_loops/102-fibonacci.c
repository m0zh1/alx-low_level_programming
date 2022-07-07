#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * starting with 1 and 2 followed by a newline
 * The numbers be separated by comma then space
 * Return: 0
 */
int main(void)
{
	int count;
	long int fib1 = 1, fib2 = 2;
	long int next;

	printf("%lu, %lu, ", fib1, fib2);
	next = fib1 + fib2;

	for (count = 3; count <= 50; ++count)
	{
		if (count == 50)
		{
			printf("%lu\n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		fib1 = fib2;
		fib2 = next;
		next = fib1 + fib2;
	}
	return (0);
}
