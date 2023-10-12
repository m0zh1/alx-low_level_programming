#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: param of type char *
 */
void print_rev(char *s)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
		;

	for (idx--; idx >= 0; idx--)
	{
		_putchar(s[idx]);
	}
	_putchar('\n');
}
