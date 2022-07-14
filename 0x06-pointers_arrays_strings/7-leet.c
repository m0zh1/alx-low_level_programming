#include "main.h"

/**
 * leet - encode a string to 1337
 * @c: param of type char *, input string
 * Return: encoded string
 */
char *leet(char *c)
{
	int lowercase[] = "aeotl";
	int uppercase[] = "AEOTL";
	int nums[] = "43071";
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
