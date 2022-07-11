#include "main.h"

/**
 * puts2 - prints every other char in a str
 * followed by a newline.
 * @str: param of type char *
 */
void puts2(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (idx % 2 == 0)
			_putchar(str[idx]);
	}
	_putchar('\n');
}
