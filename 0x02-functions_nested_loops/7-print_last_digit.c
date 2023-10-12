#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: type int
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int val;

	if (n < 0)
	{
		val = (n % 10) * -1;
		_putchar(val + '0');
		return (val);
	}
	else
	{
		val = n % 10;
		_putchar(val + '0');
		return (val);
	}
}
