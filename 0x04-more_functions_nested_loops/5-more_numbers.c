#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14 followed
 *                by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int num1, num2;

	/* Loop 10 times to print numbers */
	for (num1 = 0; num1 < 10; num1++)
	{
		/* Print numbers from 0 to 14 */
		for (num2 = 0; num2 <= 14; num2++)
		{
			/* Print '1' for numbers 10 to 14 */
			if (num2 >= 10)
				_putchar('1');

			/* Print the units digit */
			_putchar(num2 % 10 + '0');
		}

		_putchar('\n');
	}
}
