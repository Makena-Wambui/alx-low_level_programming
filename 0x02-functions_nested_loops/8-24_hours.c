#include "main.h"
/**
 * jack_bauer - this function prints time to stdout.
 *
 * Description: this function prints every minute of every
 * hour of the day.
 *
 * Return: void. Has no return value.
 */

void jack_bauer(void)
{
int hour;
int min;

for (hour = 00; hour < 24; hour++)
{
	for (min = 00; min < 60; min++)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min  % 10) + '0');
		_putchar('\n');
	}
}
}
