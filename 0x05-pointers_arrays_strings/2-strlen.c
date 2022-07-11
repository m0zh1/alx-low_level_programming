#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: param of type char *
 * Return: length of s
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (*(s + c) != '\0')
	{
		c += 1;
	}

	return (c);
}
