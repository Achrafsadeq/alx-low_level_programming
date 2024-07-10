/**
 * wildcmp - Compares two strings with wildcard support
 * @s1: The first string
 * @s2: The second string (can contain wildcards)
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* If we reach the end of both strings, they're identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If we have a '*' in s2 */
	if (*s2 == '*')
	{
		/* Skip consecutive '*' */
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		/* '*' matches empty string or any substring */
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	/* If current characters match, move to next character in both strings */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If we reach here, strings are not identical */
	return (0);
}
