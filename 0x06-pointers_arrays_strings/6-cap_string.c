#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: param of type char *, input string
 * Return: string
 */
char *cap_string(char *c)
{
	int idx, i;
	int seps[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	idx = 0;

	if (c[idx] >= 97 && c[idx] <= 122)
		c[idx] -= 32;
	idx++;

	while (c[idx] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (c[idx] == seps[i])
			{
				if (c[idx + 1] > 97 && c[idx + 1] <= 122)
					c[idx + 1] -= 32;
				break;
			}
		}
		idx++;
	}
	return (c);
}
