#include "main.h"

int length(char *str);

/**
 * rev_string - reverses a string
 * @s: param of type char *
 */
void rev_string(char *s)
{
	int len, idx;
	char *start, *end, temp;

	len = length(s);
	start = s;
	end = s;

	for (idx = 0; idx < len - 1; idx++)
		end++;
	for (idx = 0; idx < len / 2; idx++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end++;
	}
}

/**
 * length - returns the length of a string
 * @str: param of type char *
 * Return: length of @str
 */
int length(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	return (count);
}
