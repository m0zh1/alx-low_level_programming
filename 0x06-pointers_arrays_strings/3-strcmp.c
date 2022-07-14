#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: param of type char *, pointing to first string
 * @s2: param of type char *, pointing to 2nd string
 * Return: -1 if s1 < s2, 0 if s1 == s2, 1 if s1 >s2
 */
int _strcmp(char *s1, char *s2)
{
	int idx, op_stat;

	idx = 0;
	op_stat = 0;

	while (true)
	{
		if (s1[idx] == '\0' && s2[idx] == '\0')
			break;
		else if (s1[idx] == '\0')
		{
			op_stat = s2[idx];
			break;
		}
		else if (s2[idx] == '\0')
		{
			op_stat = s1[idx];
			break;
		}
		else if (s1[idx] != s2[idx])
		{
			op_stat = s1[idx] - s2[idx];
			break;
		}
		else
			idx++;
	}
	return (op_stat);
}
