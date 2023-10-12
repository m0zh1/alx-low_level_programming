#include "main.h"

/**
 * _isupper - check if c (input) is uppercase
 * @c: input (alphabet)
 * Return: 0 if false, 1 if true.
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
