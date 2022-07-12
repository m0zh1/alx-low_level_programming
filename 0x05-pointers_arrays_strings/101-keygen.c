#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void passwd_gen(void);

/**
 * main - entry0
 * Return: always 0
 */
int main(void)
{
	passwd_gen();

	return (0);
}

/**
 * passwd_gen - computes valid random passwords
 * Return: 0
 */
void passwd_gen(void)
{
	int randm, ch;
	time_t t;

	srand((unsigned int) time(&t));

	while (ch < 2772)
	{
		randm = rand() % 128;
		if ((ch + randm) > 2772)
			break;
		ch += randm;
		printf("%c", randm);
	}
	printf("%c\n", (2772 - ch));
}
