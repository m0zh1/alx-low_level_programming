#include "main.h"

/**
 * print_alphabet - main
 * function prints alphabet in lowercase,
 * followed by newline
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
