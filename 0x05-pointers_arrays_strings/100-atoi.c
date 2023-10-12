#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: param of type char *
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int idx = 0, sz = 0, orig_int = 0;
	unsigned int x = 1, y = 1;
	unsigned int i;

	while (*(s + idx) != '\0')
	{
		if ((*(s + idx) < '0' || *(s + idx) > '9') && sz > 0)
			break;
		if (*(s + idx) == '-')
			x *= -1;

		if ((*(s + idx) >= '0') && (*(s + idx) <= '9'))
		{
			if (sz > 0)
				y *= 10;
			sz++;
		}
		idx++;
	}

	for (i = idx - sz; i < idx; i++)
	{
		orig_int = orig_int + ((*(s + i) - 48) * y);
		y = y / 10;
	}
	return (orig_int * x);
}
