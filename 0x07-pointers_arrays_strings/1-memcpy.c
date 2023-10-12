#include "main.h"

/**
 * _memcpy - copies @n bytes from memory area @src to @dest
 * @dest: memory destination to copy bytes to
 * @src: memory location to copy bytes from
 * @n: number of bytes to copy
 * Return: pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
