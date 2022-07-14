#include "main.h"

unsigned int _strlen(char *str);

/**
 * _strncat - concatenates two strings
 * @dest: param of type char * pointing to destination str
 * @src: param of type char * pointing to srcc string
 * @n: param of type int, number of bytes to be copied from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int idx;
	int dest_len;

	dest_len = _strlen(dest);

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
	{
		dest[dest_len + idx] = src[idx];
	}

	dest[dest_len + idx] = '\0';

	return (dest);
}

/**
 * _strlen - returns the len of string
 * @str: param of type char *
 * Return: length of string str
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
