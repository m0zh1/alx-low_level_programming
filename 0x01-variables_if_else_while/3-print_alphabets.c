#include <stdio.h>

/**
 * main - prints the alphabets in lowercase then in upper,
 * followed by a newline.
 * Return: 0 always
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
