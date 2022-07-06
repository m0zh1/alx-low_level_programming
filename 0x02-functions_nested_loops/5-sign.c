#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the integer number n to check
 * Return: 1 and print + if positive
 * 0 and print 0 if zero, -1 and prints - if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
