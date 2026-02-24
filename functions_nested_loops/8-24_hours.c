#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: void
 * Description: This function uses nested loops to iterate through hours
 * and minutes, printing each time in the format HH:MM. The outer loop
 * iterates through hours (0-23) and the inner loop iterates through
 * minutes (0-59). Each time is printed using
 * the _putchar function to display the digits and the colon separator.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
		}
	}
}
