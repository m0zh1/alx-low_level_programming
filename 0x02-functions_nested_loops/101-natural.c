#include <stdio.h>

/**
 * main - computes the sum of all multiples of 3 and 5
 * below 1024.
 * Return: 0
 */
int main(void)
{
	int counter = 1;
	int sum = 0;

	while (counter < 1024)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
			sum += counter;
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
