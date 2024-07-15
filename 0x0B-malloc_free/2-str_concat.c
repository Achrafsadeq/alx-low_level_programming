#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to newly allocated space in memory containing
 *         s1 followed by s2, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for concatenated string */
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy s2 to concat */
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];

	/* Add null terminator */
	concat[i] = '\0';

	return (concat);
}
