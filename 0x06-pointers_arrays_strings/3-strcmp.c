#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: param of type char *, pointing to first string
 * @s2: param of type char *, pointing to 2nd string
 * Return: -1 if s1 < s2, 0 if s1 == s2, 1 if s1 >s2
 */
int _strcmp(char *s1, char *s2)
{
	int op_status = 0;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++
	}

	if (*s1 < *s2)
	{
		op_status = -1;
	}
	else if (*s1 == *s2)
	{
		op_status = 0;
	}
	else
		op_status = 1;
	return (op_status);
}
