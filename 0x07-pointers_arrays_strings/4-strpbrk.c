#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *@s: input string to search
 *@accept: string whose bytes will be searched in @s
 *Return: pointer to byte in @s that matches 1 byte in @accept, NULL if none
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j += 1;
		}
		i++;
	}
	return ('\0');
}
