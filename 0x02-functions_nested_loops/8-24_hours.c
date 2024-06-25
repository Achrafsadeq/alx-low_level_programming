#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Description: Starts from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	/* Loop through each hour of the day */
	for (hour = 0; hour < 24; hour++)
	{
		/* Loop through each minute of the hour */
		for (minute = 0; minute < 60; minute++)
		{
			/* Print the current time in HH:MM format */
			_putchar((hour / 10) + '0');  /* Print the tens place of the hour */
			_putchar((hour % 10) + '0');  /* Print the units place of the hour */
			_putchar(':');
			_putchar((minute / 10) + '0');  /* Print the tens place of the minute */
			_putchar((minute % 10) + '0');  /* Print the units place of the minute */
			_putchar('\n');
		}
	}
}
