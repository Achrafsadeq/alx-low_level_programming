#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: A pointer to the newly allocated space in memory containing
 *         s1 followed by the first n bytes of s2, and null terminated.
 *         If the function fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, index, jndex;

	/* Handle NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Adjust n if it's greater than or equal to s2 length */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to concat */
	for (index = 0; index < len1; index++)
		concat[index] = s1[index];

	/* Copy n bytes of s2 to concat */
	for (jndex = 0; jndex < n; jndex++)
		concat[index + jndex] = s2[jndex];

	/* Null-terminate the concatenated string */
	concat[index + jndex] = '\0';

	return (concat);
}
