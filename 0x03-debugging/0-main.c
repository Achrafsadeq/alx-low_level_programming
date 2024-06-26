#include "main.h"

/**
* main - Tests function that prints if integer is positive or negative
* Description: This function initializes an integer to 0 and then calls
* the function positive_or_negative to check if the integer is positive
* or negative.
* Return: 0 on success
*/
int main(void)
{
	int i;

	i = 0; /* Initialize i to 0 */
	positive_or_negative(i); /* Check if i is positive or negative */

	return (0); /* Return 0 to indicate successful execution */
}
