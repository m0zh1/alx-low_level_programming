#include "main.h"

/**
 * rev_string - reverses a string
 * @s: param of type char *
 */
void rev_string(char *s)
{
	int idx, len, c;
	char *str, temp;

	idx = 0;

	while (idx >= 0)
	{
		if (s[idx] == '\0')
			break;
		idx++;
	}
	str = s;

	for (c = 0; c < (idx - 1); c++)
	{
		for (len = c + 1; len > 0; len--)
		{
			temp = *(str + len);
			*(str + len) = *(str + (len - 1));
			*(str + (len - 1)) = temp;
		}
	}
}
