#include "main.h"

/**
 * _isalpha - checks if character is an alphabetic charcter
 * @c: the character to be checked
 * Return: if letter 1, else 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
