#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i, j, k;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (size_r <= (len1 > len2 ? len1 : len2) + 1)
		return (0);

	r[size_r - 1] = '\0';
	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 2;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		carry = sum / 10;
		r[k--] = (sum % 10) + '0';
	}

	if (k >= 0)
	{
		for (i = 0; r[k + 1 + i]; i++)
			r[i] = r[k + 1 + i];
		r[i] = '\0';
	}

	return (r);
}
