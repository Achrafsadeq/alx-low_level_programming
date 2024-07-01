#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	char password[84];
	int i = 0;

	/* Seed the random number generator with the current time */
	srand(time(0));

	/* Generate a random password */
	while (sum < 2772)
	{
		/* Generate a random character */
		password[i] = rand() % 94 + 33; /* ASCII values from 33 to 126 */
		sum += password[i];
		i++;
	}

	password[i] = '\0';

	/* Adjust the last character if the sum is not 2772 */
	if (sum != 2772)
	{
		int diff = sum - 2772;

		for (i = 0; password[i]; i++)
		{
			if (password[i] > diff)
			{
				password[i] -= diff;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);
}
