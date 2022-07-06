#include "main.h"

/**
 * _islower - checks for lower case character c
 * @c: type char
 * Return: 1 if lowercase found, else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
