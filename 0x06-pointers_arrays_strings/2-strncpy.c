#include "main.h"

/**
 * _strncpy - copies string from src to dest
 * @dest: param of type char *
 * @src: param of type char *
 * @n: param of type n, number of bytes to be copied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s = dest;

	while (*src && n--)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (s);
}
