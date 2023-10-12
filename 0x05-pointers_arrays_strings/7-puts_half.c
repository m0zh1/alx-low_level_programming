#include "main.h"

/**
 * puts_half - prints half of a string followed by newline
 * @str: param of type char *
 */
void puts_half(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
		;
	idx++;
	for (idx /= 2; str[idx] != '\0'; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}
