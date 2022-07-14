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
	int idx;

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}

	for (; idx < n; idx++)
		dest[idx] = '\0';
	return (dest);
}
