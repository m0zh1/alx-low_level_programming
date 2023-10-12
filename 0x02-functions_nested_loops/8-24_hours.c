#include "main.h"

/**
 * jack_bauer - prints every minute the day o jack bauer
 * strating from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int x = 0, y = 0;

	while (x < 24)
	{
		while (y < 60)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
			y += 1;
		}
		x += 1;
	}
}
