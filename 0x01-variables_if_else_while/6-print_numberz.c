#include <stdio.h>

/**
 * main - prints all single digit nums of base 10
 * starting from 0, followed ny a newline
 * Return: 0 always
 */
int main(void)
{
	int n;
	
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
