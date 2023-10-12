#include "main.h"
/**
 *_memset - function that fils the first @n bytes of mememory pointed
 * to by @s with const byte @b
 *
 * @s: input ptr to memory block to be filled with @b byte
 * @b: const byte to fill the @s the first @n bytes
 * @n: number of bytes to be filled
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	for (; c < n; ++c)
	{
		s[c] = b;
	}

	return (s);
}
