#include <stdio.h>

/**
 * main - print the hexadecimal in lowercase
 * followed by a newline
 * Return: 0 always
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
