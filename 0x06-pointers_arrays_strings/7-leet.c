#include "main.h"

/**
 * leet - encode a string to 1337
 * @c: param of type char *, input string
 * Return: encoded string
 */
char *leet(char *c)
{
	char lowercase[] = "aeotl";
	char uppercase[] = "AEOTL";
	int nums[] = {52, 51, 48, 55, 49};
	int idx, i;

	idx = 0;

	while (c[idx] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((c[idx] == lowercase[i]) || (c[idx] == uppercase[i]))
			{
				c[idx] = nums[i];
				break;
			}
		}
		idx++;
	}
	return (c);
}
