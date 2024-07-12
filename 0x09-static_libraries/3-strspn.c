#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the bytes to accept
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int s_index, accept_index;
	int found;

	/* Loop through each character in the string s */
	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		found = 0;
		/* Check if the current character of s is in accept */
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				found = 1; /* Character found in accept */
				break;
			}
		}
		if (!found) /* Character not found in accept */
			break;
		count++;
	}
	return (count);
}
