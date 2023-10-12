#include "main.h"

/*
 *_strstr - function to locate 1st occurance ofsubstr @needle in str @haystack
 * @haystack: input string to be searched
 * @needle: substring to be searched for
 * Return: pointer to the begining of the located str, NULL if not
 *
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0;
	j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
