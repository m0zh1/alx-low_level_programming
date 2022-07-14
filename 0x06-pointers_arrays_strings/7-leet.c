#include "main.h"

/**
 * leet - encode a string to 1337
 * @c: param of type char *, input string
 * Return: encoded string
 */
char *leet(char *c)
{
	int lowercase[] = {97, 101, 108, 111, 116};
	int uppercase[] = {65, 69, 76, 79, 84};
	int nums[] = {48, 49, 51, 52, 55};
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
