#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: string pointer from which to search bytes from @accept
 * @accept: substring prefix to seach for
 * Return: the number of bytes in the initial segment @s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0; /* number of bytes*/
	int counter;

	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
			if (*s == accept[counter])
			{
				b++; /*if char is eq increment b */
				break;
			}
			else if ((accept[counter + 1]) == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
