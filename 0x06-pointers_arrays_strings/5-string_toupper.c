#include "main.h"

/**
 * string_toupper - change all letters of a string to uppercase
 * @c: param of type char *, input string
 * Return: string
 */
char *string_toupper(char *c)
{
	int idx = 0;

	while (c[idx] != '\0')
	{
		if (c[idx] >= 97 && c[idx] <= 122)
			c[idx] -= 32;
		idx++;
	}
	return (c);
}
