#include "main.h"

/**
 * _strchr - locates char @c in string @s,
 *	returns first occurance of @c, NUL otherwise
 * @s: string to be searched
 * @c: character to be searched in @s.
 * Return: pointer to first occurance of @c, NULL if not @c
 *
 */

char *_strchr(char *s, char c)
{
    int count;

    for (count = 0; s[count] >= '\0'; count++)
    {
        if (s[count] == c)
            return (&s[count]);
    }
    return (0);
}
