#include "main.h"

/**
 * rot13 - encodesa string using a rot13 cipher
 * @c: param of type char *, input string
 * Return: encoded string
 */
char *rot13(char *c)
{
	int idx, i;
	char alphabt[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char key[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	idx = 0;

	while (c[idx] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (c[idx] == alphabt[i])
			{
				c[idx] = key[i];
				break;
			}
		}
		idx++;
	}
	return (c);
}
