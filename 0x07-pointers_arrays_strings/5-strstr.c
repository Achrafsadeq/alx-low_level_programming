#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search in.
 * @needle: The substring to look for.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int row, col;

	if (*needle == '\0')
		return (haystack);

	/* Loop through each character in the haystack */
	for (row = 0; haystack[row] != '\0'; row++)
	{
		/* Loop through each character in the needle */
		for (col = 0; needle[col] != '\0'; col++)
		{
			if (haystack[row + col] != needle[col])
				break;
		}
		if (needle[col] == '\0')
			return (haystack + row);
	}

	return (NULL);
}
