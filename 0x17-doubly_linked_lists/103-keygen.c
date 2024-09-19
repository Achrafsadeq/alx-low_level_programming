#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void generate_key(const char *username, char *key);

#define CHARSET "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk"
#define KEY_LENGTH 6

/**
 * generate_key - Create a key based on the provided username
 * @username: Input username string
 * @key: Output buffer for the generated key
 *
 * Description: This function generates a key based on the input username
 */
void generate_key(const char *username, char *key)
{
	size_t username_length = strlen(username);
	unsigned long sum = 0, product = 1, squares_sum = 0;
	char max_char = username[0];
	unsigned int i, temp;

	key[0] = CHARSET[(username_length ^ 59) & 63];

	for (i = 0; i < username_length; ++i)
	{
		sum += username[i];
		product *= username[i];
		squares_sum += username[i] * username[i];
		if (username[i] > max_char)
			max_char = username[i];
	}

	key[1] = CHARSET[(sum ^ 79) & 63];
	key[2] = CHARSET[(product ^ 85) & 63];

	srand(max_char ^ 14);
	key[3] = CHARSET[rand() & 63];

	key[4] = CHARSET[(squares_sum ^ 239) & 63];

	temp = 0;
	for (i = 0; i < (unsigned int)username[0]; ++i)
		temp = rand();

	key[5] = CHARSET[(temp ^ 229) & 63];
	key[KEY_LENGTH] = '\0';
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <username>\n", argv[0]);
		return (1);
	}

	char key[KEY_LENGTH + 1];

	generate_key(argv[1], key);

	printf("%s\n", key);
	return (0);
}
