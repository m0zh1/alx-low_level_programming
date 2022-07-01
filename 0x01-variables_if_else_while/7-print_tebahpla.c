#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse,
 * followed by a newline
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
