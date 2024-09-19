#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Create a unique key based on the provided username for crackme5
 * @argc: The count of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: 0 if successful, or 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	unsigned int index, multiplier;
	size_t len, sum;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7] = " ";

	if (argc != 2)
	{
		printf("Usage: ./keygen5 username\n");
		return (1);
	}

	len = strlen(argv[1]);
	key[0] = l[(len ^ 59) & 63];

	for (index = 0, sum = 0; index < len; index++)
		sum += argv[1][index];
	key[1] = l[(sum ^ 79) & 63];

	for (index = 0, multiplier = 1; index < len; index++)
		multiplier *= argv[1][index];
	key[2] = l[(multiplier ^ 85) & 63];

	for (multiplier = argv[1][0], index = 0; index < len; index++)
		if ((char)multiplier <= argv[1][index])
			multiplier = argv[1][index];

	srand(multiplier ^ 14);
	key[3] = l[rand() & 63];

	for (multiplier = 0, index = 0; index < len; index++)
		multiplier += argv[1][index] * argv[1][index];
	key[4] = l[(multiplier ^ 239) & 63];

	for (multiplier = 0, index = 0; (char)index < argv[1][0]; index++)
		multiplier = rand();
	key[5] = l[(multiplier ^ 229) & 63];

	printf("%s\n", key);
	return (0);
}
